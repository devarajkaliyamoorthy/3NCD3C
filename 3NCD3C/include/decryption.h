// decryption.h

#ifndef DECRYPTION_H
#define DECRYPTION_H

#include <string>

class Decryption {
public:
    // Decrypts a string using AES encryption
    static std::string decryptAES(const std::string& ciphertext, const std::string& key);

    // Decrypts a string using the Caesar Cipher
    static std::string decryptCaesar(const std::string& ciphertext, int shift);
};

#endif // DECRYPTION_H
