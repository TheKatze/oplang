//
// Created by thekatze on 10/03/2019.
//

#ifndef OPLANG_INTERPRETER_H
#define OPLANG_INTERPRETER_H

#include <string>
#include <vector>

#include "Token.h"

class Interpreter {
public:
    std::vector<Token> tokenize(std::string source);
};


#endif //OPLANG_INTERPRETER_H
