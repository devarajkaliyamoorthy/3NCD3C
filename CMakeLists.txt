cmake_minimum_required(VERSION 3.10)
project(DataEncryptionTool)

set(CMAKE_CXX_STANDARD 14)

# Include directories
include_directories(include)

# Add source files
add_executable(3NCD3C
    src/main.cpp
    src/encryption.cpp
    src/decryption.cpp
    src/filehandler.cpp
)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
