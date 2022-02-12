#include "B.h"
#include "A.h"
#include <iostream>

using namespace std;

B::B(A* pA) {
    m_pA = pA;
}

void B::hoge() {
    cout << "bar" << endl;
    m_pA->foo();
}
