#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"

class Sub1 : public Sup1 {
    public:
        Sub1();
        ~Sub1();
};

Sub1::Sub1() {
    std::cout << "Sub1のコンストラクタ" << std::endl;
}

Sub1::~Sub1() {
    std::cout << "Sub1のデストラクタ" << std::endl;
}

#endif // _SUB1_H_
