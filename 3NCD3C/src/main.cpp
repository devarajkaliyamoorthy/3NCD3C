#include <iostream>
#include <string>
#include <limits>
#include "encryption.h"
#include "decryption.h"
#include "filehandler.h"

void clearInputBuffer() {
    // Clear the input buffer in case of invalid input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getShiftValue() {
    int shift;
    while (true) {
        std::cout << "Enter shift value (1-25): ";
        std::cin >> shift;
        if (std::cin.fail() || shift < 1 || shift > 25) {
            std::cout << "Invalid input. Please enter a number between 1 and 25.\n";
            clearInputBuffer();
        } else {
            return shift;
        }
    }
}

void encryptOrDecryptMessage(int choice) {
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    int shift = getShiftValue();

    if (choice == 1) {
        std::string encryptedText = encrypt(text, shift);
        std::cout << "Encrypted Text: " << encryptedText << std::endl;
    } else {
        std::string decryptedText = decrypt(text, shift);
        std::cout << "Decrypted Text: " << decryptedText << std::endl;
    }
}

void encryptOrDecryptFile(int choice) {
    std::string fileName;
    std::cout << "Enter the file name: ";
    std::getline(std::cin, fileName);

    int shift = getShiftValue();

    if (choice == 3) {
        processFile(fileName, shift, true);
        std::cout << "File encrypted successfully! Output saved to output.txt\n";
    } else {
        processFile(fileName, shift, false);
        std::cout << "File decrypted successfully! Output saved to output.txt\n";
    }
}

int main() {
    int choice;

    while (true) {
        std::cout << "\n==========================================\n";
        std::cout << "     Data Encryption/Decryption Tool     \n";
        std::cout << "==========================================\n";
        std::cout << "1. Encrypt a message\n";
        std::cout << "2. Decrypt a message\n";
        std::cout << "3. Encrypt a file\n";
        std::cout << "4. Decrypt a file\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        clearInputBuffer(); // Clear any remaining characters in the input buffer

        if (choice == 1 || choice == 2) {
            encryptOrDecryptMessage(choice);
        } else if (choice == 3 || choice == 4) {
            encryptOrDecryptFile(choice);
        } else if (choice == 5) {
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid choice! Please select a valid option (1-5).\n";
        }
    }

    return 0;
}

