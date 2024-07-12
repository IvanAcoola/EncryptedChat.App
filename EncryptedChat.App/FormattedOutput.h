#pragma once

#include <string>
#include <iostream>

inline int offset = 0;


void printSuccess(std::string text) {
	std::cout.width(3);
    std::cout << "[ ";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    std::cout << "+";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    std::cout << " ] " << text << std::endl;
}

void printFailed(std::string text, bool messaged=false) {
    if (messaged) {
        COORD CursorPosition;

        CursorPosition.Y = 3 + offset;
        CursorPosition.X = 0;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
    }

    std::cout.width(3);
    std::cout << "[ ";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    std::cout << "+";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    std::cout << " ] " << text << std::endl;
}

void clearLine() {
	std::cout
		<< "\x1b[1A"
		<< "\x1b[2K";
}

void printMessage(std::string line, bool me = true)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO cursor;
    GetConsoleScreenBufferInfo(console, &cursor);

    COORD CursorPosition;

    CursorPosition.Y = 3 + offset;
    CursorPosition.X = 0;

    SetConsoleCursorPosition(console, CursorPosition);

    if (me) {
        std::cout << "[ ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
        std::cout << "me";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        std::cout << " ] ";
    }
    else {
        std::cout << "[ ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        std::cout << "companion";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        std::cout << " ] ";
    }

    std::cout << line << std::endl;

    SetConsoleCursorPosition(console, cursor.dwCursorPosition);

    offset++;

}