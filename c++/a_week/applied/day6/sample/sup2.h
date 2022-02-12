#ifndef _SUP2_H_
#define _SUP2_H_

#include <iostream>

class Sup2 {
    public:
        Sup2();
        virtual ~Sup2();
};

Sup2::Sup2() {
    std::cout << "Sup2のコンストラクタ" << std::endl;
}

Sup2::~Sup2() {
    std::cout << "Sup2のデストラクタ" << std::endl;
}

#endif // _SUP2_H_
