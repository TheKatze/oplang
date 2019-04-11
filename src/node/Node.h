//
// Created by thekatze on 11/04/2019.
//

#ifndef OPLANG_NODE_H
#define OPLANG_NODE_H

#include "NodeType.h"

// Forward declare
class Node;

class Node {
public:
    NodeType m_nodeType;

    Node* m_left;
    Node* m_right;
};


#endif //OPLANG_NODE_H
