//
// Created by thekatze on 10/03/2019.
//

#include <Interpreter.h>
#include <util/FileLoader.h>
#include <util/Logger.h>
#include <token/Tokenizer.h>

int main() {
    Interpreter interPeter;

    Logger::info("Input");
    Logger::info(FileLoader::loadFile("../../assets/test.txt"));

    std::vector<Token> tokens = Tokenizer().tokenize(FileLoader::loadFile("../../assets/test.txt"));

    Logger::info("Tokens");
    for (const Token& token : tokens) {
        Logger::info(token.m_value);
    }

    return 0;
}
