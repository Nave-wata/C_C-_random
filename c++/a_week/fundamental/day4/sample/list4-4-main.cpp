#include <iostream>

using namespace std;

int main() {
    int *p = 0;
    int i;

    p = new int[10];
    for (i = 0; i < 10; i++) {
        p[i] = i;
        cout << p[i] << endl;
    }
    delete [] p;

    return 0;
}
