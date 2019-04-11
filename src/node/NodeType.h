//
// Created by thekatze on 11/04/2019.
//

#ifndef OPLANG_NODETYPE_H
#define OPLANG_NODETYPE_H

enum NodeType : unsigned char {
    VALUE = 0x01,
    OPERATOR = 0x02,
    VARIABLE = 0x03
};

#endif //OPLANG_NODETYPE_H
