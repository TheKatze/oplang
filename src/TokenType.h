//
// Created by thekatze on 19/03/2019.
//

#ifndef OPLANG_TOKENTYPE_H
#define OPLANG_TOKENTYPE_H

enum TokenType : unsigned char {
    NONE = 0x00,
    VARIABLE = 0x01,
    OPERATOR = 0x02,
    KEYWORD = 0x03,
    BLOCK_START = 0x10,
    BLOCK_END = 0x11,
    STATEMENT_END = 0xff
};

#endif //OPLANG_TOKENTYPE_H
