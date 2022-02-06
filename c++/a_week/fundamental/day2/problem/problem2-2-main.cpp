#include <iostream>
#include "minmax.h"

using namespace std;

int main() {
    MinMax m;

    int a = 4;
    int b = 2;

    cout << a << ", " << b << "のうち, 最大のものは: " << m.max(a, b) << endl;
    cout << a << ", " << b << "のうち, 最小のものは: " << m.min(a, b) << endl;

    return 0;
}
