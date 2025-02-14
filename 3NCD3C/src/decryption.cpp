#include "decryption.h"
#include "encryption.h"  // Reuse the encrypt function to reverse the process

std::string decrypt(const std::string& text, int shift) {
    return encrypt(text, 26 - shift);  // Reverse the Caesar cipher by shifting in the opposite direction
}
