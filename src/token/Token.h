//
// Created by thekatze on 10/03/2019.
//

#ifndef OPLANG_TOKEN_H
#define OPLANG_TOKEN_H

#include <string>
#include <vector>
#include "TokenType.h"

// Forward declare
class Token;

class Token {
public:
    Token() = default;

    TokenType m_type;
    std::string m_value;

    Token* m_left;
    Token* m_right;
};

#endif //OPLANG_TOKEN_H
