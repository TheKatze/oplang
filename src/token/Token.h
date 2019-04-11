//
// Created by thekatze on 10/03/2019.
//

#ifndef OPLANG_TOKEN_H
#define OPLANG_TOKEN_H

#include <string>
#include "TokenType.h"

class Token {
public:
    Token() = default;

    TokenType m_type;
    std::string m_value;
};

#endif //OPLANG_TOKEN_H
