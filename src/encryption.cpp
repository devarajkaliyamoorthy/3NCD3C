#include "encryption.h"

std::string encrypt(const std::string& text, int shift) {
    std::string encryptedText = text;
    for (int i = 0; i < encryptedText.length(); i++) {
        if (isalpha(encryptedText[i])) {
            char base = islower(encryptedText[i]) ? 'a' : 'A';
            encryptedText[i] = (encryptedText[i] - base + shift) % 26 + base;
        }
    }
    return encryptedText;
}
