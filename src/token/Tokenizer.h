//
// Created by thekatze on 11/04/2019.
//

#ifndef OPLANG_TOKENIZER_H
#define OPLANG_TOKENIZER_H

#include <string>
#include "Token.h"

class Tokenizer {
public:
    Token tokenize(std::string input);
};


#endif //OPLANG_TOKENIZER_H
