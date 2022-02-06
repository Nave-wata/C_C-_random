#include <iostream>
#include "calcs.h"

using namespace std;

int main() {
    CCalcs calc;

    calc.a = 4;
    calc.b = 3;

    cout << calc.a << " + " << calc.b << " = " << calc.add() << endl;

    return 0;
}
