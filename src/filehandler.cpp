#include "filehandler.h"
#include <iostream>
#include <fstream>
#include <string>
#include "encryption.h"
#include "decryption.h"

// Function to handle file encryption/decryption
void processFile(const std::string& fileName, int shift, bool encrypting) {
    std::ifstream inputFile(fileName);
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return;
    }

    std::string line;
    while (getline(inputFile, line)) {
        std::string result;
        if (encrypting) {
            result = encrypt(line, shift);
        } else {
            result = decrypt(line, shift);
        }
        outputFile << result << std::endl;
    }

    inputFile.close();
    outputFile.close();
}
