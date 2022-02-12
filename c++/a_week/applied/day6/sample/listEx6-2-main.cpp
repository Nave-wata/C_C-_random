#include <iostream>
#include "sup1.h"
#include "sup2.h"
#include "sub1.h"
#include "sub2.h"

int main() {
    Sup1 *s1 = new Sub1();
    Sup2 *s2 = new Sub2();

    delete s1;
    delete s2;

    return 0;
}
