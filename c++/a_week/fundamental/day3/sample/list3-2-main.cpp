#include <iostream>
#include "sample2.h"

using namespace std;

int main() {
    Sample2 s;

    s.setNum(5);

    cout << "num = " << s.getNum() << endl;

    return 0;
}
