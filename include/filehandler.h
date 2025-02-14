// filehandler.h

#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include <vector>

class FileHandler {
public:
    // Reads the content of a file into a string
    static std::string readFile(const std::string& filePath);

    // Writes content to a file
    static void writeFile(const std::string& filePath, const std::string& content);

    // Reads the content of all files in a directory and returns it as a vector of strings
    static std::vector<std::string> readFilesInDirectory(const std::string& directoryPath);

    // Writes the content of multiple files to an output directory
    static void writeFilesToDirectory(const std::vector<std::pair<std::string, std::string>>& fileContents, const std::string& outputDirectory);
};

#endif // FILEHANDLER_H
