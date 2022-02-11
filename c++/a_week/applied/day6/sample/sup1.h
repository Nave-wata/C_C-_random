#ifndef _SUP1_H_
#define _SUP1_H_

#include <iostream>

class Sup1 {
    public:
        Sup1();
        ~Sup1();
};

Sup1::Sup1() {
    std::cout << "Sup1のコンストラクタ" << std::endl;
}

Sup1::~Sup1() {
    std::cout << "Sup1のデストラクタ" << std::endl;
}

#endif // _SUP1_H_
