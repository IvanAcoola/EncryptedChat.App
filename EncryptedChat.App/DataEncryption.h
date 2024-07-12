#pragma once

#include <Windows.h>

#include <iostream>

#include "CkBinData.h"
#include "CkCrypt2.h"

#include <string>
#include <vector>

class DataEncryption {
private:
    std::string secretKey;

public:
    DataEncryption();

    DataEncryption(std::string key);

    ~DataEncryption();

    std::string toBase64_img(std::vector <BYTE> data);

    void encryptData(std::string &data);

    void decryptData(std::string &data);

    void setEncryptionKey(std::string key);

};