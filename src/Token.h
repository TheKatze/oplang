//
// Created by thekatze on 10/03/2019.
//

#ifndef OPLANG_TOKEN_H
#define OPLANG_TOKEN_H

#include <string>
#include <vector>

class Token {
public:
    std::string m_value;
    std::vector<Token> m_children;
};

#endif //OPLANG_TOKEN_H
