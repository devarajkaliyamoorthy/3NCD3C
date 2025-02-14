// encryption.h

#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>

class Encryption {
public:
    // Encrypts a string using AES encryption
    static std::string encryptAES(const std::string& plaintext, const std::string& key);

    // Decrypts a string using AES encryption
    static std::string decryptAES(const std::string& ciphertext, const std::string& key);

    // Encrypts a string using the Caesar Cipher (basic encryption)
    static std::string encryptCaesar(const std::string& plaintext, int shift);

    // Decrypts a string using the Caesar Cipher
    static std::string decryptCaesar(const std::string& ciphertext, int shift);
};

#endif // ENCRYPTION_H
