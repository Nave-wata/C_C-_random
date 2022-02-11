#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include "IInf1.h"
#include "IInf2.h"

class Sample : public IInf1, public IInf2 {
    public:
        void func1();
        void func2();
        void func3();
        void func4();
};

void Sample::func1() {
    std::cout << "func1" << std::endl;
}

void Sample::func2() {
    std::cout << "func2" << std::endl;
}

void Sample::func3() {
    std::cout << "func3" << std::endl;
}

void Sample::func4() {
    std::cout << "func4" << std::endl;
}

#endif // _SAMPLE_H_
