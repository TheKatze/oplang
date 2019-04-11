//
// Created by thekatze on 11/04/2019.
//

#include <cctype>

#include "Tokenizer.h"

bool isWhitespace(char c) {
    return c == '\n'
        || c == '\r'
        || c == ' ';
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

