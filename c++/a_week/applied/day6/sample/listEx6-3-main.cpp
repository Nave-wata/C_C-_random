#include <iostream>
#include "IInf1.h"
#include "IInf2.h"
#include "sample.h"

void foo(IInf1*);
void bar(IInf2*);

int main() {
    Sample *s = new Sample();
    foo((IInf1*)s);
    bar((IInf2*)s);

    return 0;
}

void foo(IInf1* p) {
    p->func1();
    p->func2();
}

void bar(IInf2* p) {
    p->func3();
    p->func4();
}
