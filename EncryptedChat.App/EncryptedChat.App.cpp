#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>

#include <Windows.h>

#include "FormattedOutput.h"

#include "GlobalValues.h"

#include "DataEncryption.h"

#include <iostream>

#include "CkGlobal.h"

namespace beast = boost::beast;
namespace http = beast::http;
namespace websocket = beast::websocket;
namespace net = boost::asio;
using tcp = boost::asio::ip::tcp;

net::io_context chat_ioc;
tcp::resolver chat_resolver{ chat_ioc };
websocket::stream<tcp::socket> chat_ws{ chat_ioc };

DataEncryption enc;

static bool connectSocket()
{
    try
    {
        std::string extraurl = "/ws/data/";
        std::string port = "8000";

        std::string host = "127.0.0.1";

        auto const results = chat_resolver.resolve(host, port);
        auto ep = net::connect(chat_ws.next_layer(), results);
        host += ':' + std::to_string(ep.port());
        chat_ws.set_option(websocket::stream_base::decorator(
            [](websocket::request_type& req)
            {
                req.set(http::field::user_agent,
                std::string(BOOST_BEAST_VERSION_STRING) +
                " websocket-client-coro");
            }));
        chat_ws.handshake(host, extraurl);
    }
    catch (std::exception const& e)
    {
        printFailed("Could not connect to server");
        exit(-1);
        return EXIT_FAILURE;
    }
}

static void read_from_websocket() {
    try {
        while (true) {
            beast::flat_buffer buffer;
            chat_ws.read(buffer);
            std::string readBuffer = beast::buffers_to_string(buffer.data());

            if (readBuffer == "found") {
                ChatData::connected = true;
            }

            else if (readBuffer == "quit") {
                chat_ws.close(websocket::close_code::normal);
                printFailed("Disconnected from server (Got \"quit\")", true);
                Sleep(1000);
                exit(-1);
            }

            else {
                enc.decryptData(readBuffer);
                printMessage(readBuffer, false);
            }
        }
    }
    catch (const std::exception& e) {
    }
}


static bool sendMessage(std::string text) {
    try
    {
        chat_ws.write(net::buffer(text));
    }
    catch (std::exception const& e)
    {
        printFailed("Disconnected from server", true);
        exit(-1);
        return EXIT_FAILURE;
    }
}

int main()
{

    std::cout << " |- Your nickname: ";
    std::getline(std::cin, ChatData::nickname);

    std::cout << " |- Companion nickname: ";
    std::getline(std::cin, ChatData::searchName);

    std::cout << " |- Encryption key: ";
    std::getline(std::cin, ChatData::encryptKey);

    enc.setEncryptionKey(ChatData::encryptKey);

    std::cout << std::endl;

    printSuccess("Connecting to server...");

    connectSocket();

    printSuccess("Connected to server");

    std::jthread(read_from_websocket).detach();

    sendMessage(ChatData::nickname + ";" + ChatData::searchName);

    printSuccess("Searching for companion");

    while (!ChatData::connected) {
        Sleep(10);
    }

    printSuccess("Companion found");

    system("cls");

    std::string message;

    while (true) {
        std::cout << " |- Message: ";

        std::getline(std::cin, message);

        if (message != "") {
            printMessage(message);

            enc.encryptData(message);

            sendMessage(message);
        }

        clearLine();
    }

    chat_ws.close(websocket::close_code::normal);

}