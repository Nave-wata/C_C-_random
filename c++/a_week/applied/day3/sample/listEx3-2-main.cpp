#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main() {
    Calc<int> i;
    Calc<string> s;

    i.set(1, 2);
    s.set("ABC", "DEF");

    cout << i.add() << endl << s.add() << endl;

    return 0;
}
