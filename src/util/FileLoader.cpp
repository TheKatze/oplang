//
// Created by thekatze on 10/03/2019.
//

#include "FileLoader.h"

#include <sstream>
#include <fstream>

#include "Logger.h"

std::string FileLoader::loadFile(std::string filePath) {
    std::stringstream fileContents;

    std::ifstream fileStream(filePath);

    if (fileStream.bad()) {
        Logger::error("Could not open file: " + filePath);
    }

    while (!fileStream.eof()) {
        fileContents << (char) fileStream.get();
    }

    return fileContents.str();
}
