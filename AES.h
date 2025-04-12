#pragma once

#include <openssl/aes.h>
#include <openssl/rand.h>

using namespace System;

public ref class AES {
public:
    // Encrypt function
    static String^ encrypt(String^ plainText, String^ key);

    // Decrypt function
    static String^ decrypt(String^ encryptedText, String^ key);
};