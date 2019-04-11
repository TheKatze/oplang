//
// Created by thekatze on 19/03/2019.
//

#ifndef OPLANG_TOKENTYPE_H
#define OPLANG_TOKENTYPE_H

enum TokenType : unsigned char {
    INT = 0x01,
    PLUS = 0x10,
    MINUS = 0x11,
    MULT = 0x12,
    DIV = 0x13,
    PAR_OPEN = 0x20,
    PAR_CLOSE = 0x21,
    END_OF_FILE = 0xff
};

#endif //OPLANG_TOKENTYPE_H
