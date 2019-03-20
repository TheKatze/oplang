//
// Created by thekatze on 19/03/2019.
//

#ifndef OPLANG_KEYWORDS_H
#define OPLANG_KEYWORDS_H

#include <string>
#include <vector>

struct Keyword {
    std::string m_value;
};

namespace Keywords {
    const Keyword OPERATOR = {"operator"};
    const Keyword STATEMENT_END = {";"};


    const std::vector<Keyword> ALL_KEYWORDS = {
            OPERATOR,
            STATEMENT_END
    };
};

#endif //OPLANG_KEYWORDS_H
