#include "sample.h"
#include <iostream>

using namespace std;

void Sample::func1() {
    cout << "I'm func1" << endl;

    a = 1;
    b = 1;

    func2();
}

void Sample::func2() {
    cout << "I'm func2" << endl;

    a = 2;
    b = 2;

    cout << "a = " << a << ", b = " << b << endl;
}
