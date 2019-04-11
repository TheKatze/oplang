//
// Created by thekatze on 19/03/2019.
//

#ifndef OPLANG_TOKENTYPE_H
#define OPLANG_TOKENTYPE_H

enum TokenType : unsigned char {
    NONE = 0x00,
    INT = 0x01,
    ADD = 0x10,
    SUB = 0x11,
    MUL = 0x12,
    DIV = 0x13,
    PAR_OPEN = 0x20,
    PAR_CLOSE = 0x21,
    END_OF_FILE = 0xff
};

#endif //OPLANG_TOKENTYPE_H
