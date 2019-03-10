//
// Created by thekatze on 10/03/2019.
//

#include "Logger.h"

#include <iostream>

void Logger::info(std::string message) {
    std::cout << "[info] " << message << std::endl;
}

void Logger::warn(std::string message) {
    std::cout << "[warning] " << message << std::endl;
}

void Logger::error(std::string message) {
    std::cout << "[error] " << message << std::endl;
}

void Logger::terminate(std::string message, int errorCode) {
    std::cout << "[critical] " << message << std::endl;

    exit(errorCode);
}
