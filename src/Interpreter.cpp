//
// Created by thekatze on 10/03/2019.
//

#include "Interpreter.h"
#include "util/Logger.h"

#include <sstream>

std::vector<Token> Interpreter::tokenize(std::string source) {
    std::vector<Token> list;

    unsigned int startIndex = 0;
    unsigned int length = 0;

    for (unsigned int i = 0; i < source.size(); ++i) {
        char symbol = source.at(i);

        if (symbol == ' ' || i == source.size() - 1) {
            length = i - startIndex;

            if (length == 0) {
                continue;
            }

            Token newToken = Token();
            newToken.m_value = source.substr(startIndex, length);

            list.push_back(newToken);

            Logger::info("Start: " + std::to_string(startIndex) + " Length: " + std::to_string(length));

            startIndex = i + 1;
        }
    }

    return list;
}
