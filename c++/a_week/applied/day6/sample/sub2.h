#ifndef _SUB2_H_
#define _SUB2_H_

#include "sup2.h"

class Sub2 : public Sup2 {
    public:
        Sub2();
        ~Sub2();
};

Sub2::Sub2() {
    std::cout << "Sub2のコンストラクタ" << std::endl;
}

Sub2::~Sub2() {
    std::cout << "Sub2のデストラクタ" << std::endl;
}

#endif // _SUB2_H_
