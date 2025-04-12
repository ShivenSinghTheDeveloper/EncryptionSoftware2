//we need to work on the ui now
//the decryption is fixed

#include "AES.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace System;
using namespace System::Security::Cryptography;
using namespace System::Text;
using namespace System::IO;
using namespace System::Windows::Forms;

String^ AES::encrypt(String^ plainText, String^ key) {
    // Convert the key and plaintext to byte arrays
    array<Byte>^ keyArray = Encoding::UTF8->GetBytes(key);
    array<Byte>^ plainTextArray = Encoding::UTF8->GetBytes(plainText);

    // Create an AES object
    Aes^ aes = Aes::Create();
    aes->Key = keyArray;
    aes->Mode = CipherMode::CBC;
    aes->Padding = PaddingMode::PKCS7;

    // Generate a random IV (Initialization Vector)
    aes->GenerateIV();
    array<Byte>^ iv = aes->IV;

    // Create an encryptor
    ICryptoTransform^ encryptor = aes->CreateEncryptor(aes->Key, aes->IV);

    // Perform the encryption
    MemoryStream^ ms = gcnew MemoryStream();
    CryptoStream^ cs = gcnew CryptoStream(ms, encryptor, CryptoStreamMode::Write);
    cs->Write(plainTextArray, 0, plainTextArray->Length);
    cs->FlushFinalBlock();

    // Combine the IV and encrypted data into a single array
    array<Byte>^ cipherTextArray = ms->ToArray();
    array<Byte>^ resultArray = gcnew array<Byte>(iv->Length + cipherTextArray->Length);
    System::Buffer::BlockCopy(iv, 0, resultArray, 0, iv->Length);
    System::Buffer::BlockCopy(cipherTextArray, 0, resultArray, iv->Length, cipherTextArray->Length);

    // Convert the result to a base64 string
    return Convert::ToBase64String(resultArray);
}

String^ AES::decrypt(String^ cipherText, String^ key) {
    // Convert the key and ciphertext to byte arrays
    array<Byte>^ keyArray = Encoding::UTF8->GetBytes(key);
    array<Byte>^ cipherTextWithIv = Convert::FromBase64String(cipherText);

    // Extract the IV from the combined array
    array<Byte>^ iv = gcnew array<Byte>(16);
    array<Byte>^ cipherTextArray = gcnew array<Byte>(cipherTextWithIv->Length - iv->Length);
    System::Buffer::BlockCopy(cipherTextWithIv, 0, iv, 0, iv->Length);
    System::Buffer::BlockCopy(cipherTextWithIv, iv->Length, cipherTextArray, 0, cipherTextArray->Length);

    // Create an AES object
    Aes^ aes = Aes::Create();
    aes->Key = keyArray;
    aes->IV = iv;
    aes->Mode = CipherMode::CBC;
    aes->Padding = PaddingMode::PKCS7;

    // Create a decryptor
    ICryptoTransform^ decryptor = aes->CreateDecryptor(aes->Key, aes->IV);

    // Perform the decryption
    MemoryStream^ ms = gcnew MemoryStream(cipherTextArray);
    CryptoStream^ cs = gcnew CryptoStream(ms, decryptor, CryptoStreamMode::Read);
    StreamReader^ sr = gcnew StreamReader(cs);
    String^ decryptedText = sr->ReadToEnd();

    return decryptedText;
}
