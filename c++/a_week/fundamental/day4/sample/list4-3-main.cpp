#include <iostream>

using namespace std;

int main() {
    int *p = NULL;
    p = new int();

    *p = 123;

    cout << "*p = " << *p << endl;

    delete p;

    return 0;
}
