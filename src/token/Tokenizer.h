//
// Created by thekatze on 11/04/2019.
//

#ifndef OPLANG_TOKENIZER_H
#define OPLANG_TOKENIZER_H

#include <string>
#include <vector>

#include "Token.h"

class Tokenizer {
    unsigned int m_pos;

    std::string parseNumber(const std::string& input);
public:
    Tokenizer();
    ~Tokenizer() = default;
    std::vector<Token> tokenize(const std::string& input);
};


#endif //OPLANG_TOKENIZER_H
