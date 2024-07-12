#include "DataEncryption.h"

DataEncryption::DataEncryption()
{
}

DataEncryption::DataEncryption(std::string key)
{
    this->secretKey = key;
}

DataEncryption::~DataEncryption()
{
    this->secretKey.clear();
}

std::string DataEncryption::toBase64_img(std::vector<BYTE> data)
{
    CkBinData pdfData;
    for (BYTE dat : data) {
        pdfData.AppendByte(dat);
    }
    const char* b64 = pdfData.getEncoded("base64");
    return b64;
}

void DataEncryption::encryptData(std::string &data)
{
    CkBinData bindata;

    bindata.AppendString(data.c_str(), "utf-8");

    const char* b64 = bindata.getEncoded("base64");

    CkCrypt2 crypt;

    crypt.put_CryptAlgorithm("arc4");

    crypt.put_KeyLength(this->secretKey.size());

    crypt.put_EncodingMode("hex");

    crypt.SetEncodedKey(this->secretKey.c_str(), "hex");

    const char* encStr = crypt.encryptStringENC(b64);

    data = encStr;

    encStr = nullptr;

}

void DataEncryption::decryptData(std::string& data)
{
    CkCrypt2 crypt;

    crypt.put_CryptAlgorithm("arc4");

    crypt.put_KeyLength(this->secretKey.size());

    crypt.put_EncodingMode("hex");

    crypt.SetEncodedKey(this->secretKey.c_str(), "hex");

    const char* decStr = crypt.decryptStringENC(data.c_str());

    CkBinData bindata;

    bindata.AppendEncoded(decStr, "base64");

    decStr = nullptr;

    data = bindata.getString("utf-8");;

}

void DataEncryption::setEncryptionKey(std::string key)
{
    this->secretKey = key;
}
