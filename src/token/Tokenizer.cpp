//
// Created by thekatze on 11/04/2019.
//

#include <algorithm>
#include <cctype>

#include "Tokenizer.h"

namespace TokenTypes {
    struct Identifier {
        char m_symbol;
        TokenType m_type;
    };

    std::vector<Identifier> ALL_TOKENS = {
            {'+', TokenType::ADD},
            {'-', TokenType::SUB},
            {'*', TokenType::MUL},
            {'/', TokenType::DIV},
            {'(', TokenType::PAR_OPEN},
            {')', TokenType::PAR_CLOSE}
    };
}

bool isWhitespace(char c) {
    return c == '\n'
        || c == '\r'
        || c == ' ';
}

TokenType getOperator(char c) {
    for (TokenTypes::Identifier identifier : TokenTypes::ALL_TOKENS) {
        if (c == identifier.m_symbol) {
            return identifier.m_type;
        }
    }

    return TokenType::NONE;
}

Tokenizer::Tokenizer()
        : m_pos(0) {}

std::vector<Token> Tokenizer::tokenize(const std::string& input) {
    std::vector<Token> list;

    while (m_pos < input.size()) {
        char current = input.at(m_pos);

        // Skip Whitespace
        if (isWhitespace(current)) {
            ++m_pos;

            continue;
        }

        // Parse digits
        if (std::isdigit(current)) {
            Token newToken = { TokenType::INT, parseNumber(input) };
            list.emplace_back(newToken);

            continue;
        }

        // Parse operators
        TokenType tokenType = getOperator(current);
        if (tokenType != TokenType::NONE) {
            Token newToken = { tokenType, std::string() + current };
            list.emplace_back(newToken);

            ++m_pos;

            continue;
        }

        ++m_pos;
    }

    return list;
}

std::string Tokenizer::parseNumber(const std::string& input) {
    unsigned int startIndex = m_pos;
    unsigned int endIndex = m_pos;

    // fite me
    while (std::isdigit(input.at(++endIndex)));

    m_pos = endIndex;

    return input.substr(startIndex, endIndex - startIndex);
}

