//
// Created by thekatze on 10/03/2019.
//

#include <Interpreter.h>
#include <util/FileLoader.h>
#include <util/Logger.h>

int main(void) {
    Interpreter interPeter;

    Logger::info(FileLoader::loadFile("../../assets/test.txt"));

    std::vector<Token> tokens = interPeter.tokenize(FileLoader::loadFile("../../assets/test.txt"));

    for (Token token : tokens) {
        Logger::info(token.m_value);
    }

    return 0;
}