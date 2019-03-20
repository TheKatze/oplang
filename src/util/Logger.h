//
// Created by thekatze on 10/03/2019.
//

#ifndef OPLANG_LOGGER_H
#define OPLANG_LOGGER_H

#include <string>

class Logger {
public:
    static void info(std::string message);
    static void warn(std::string message);
    static void error(std::string message);

    static void terminate(std::string message, int errorCode);
};


#endif //OPLANG_LOGGER_H
