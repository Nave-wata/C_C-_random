#include <iostream>

using namespace std;

int main() {
    int* num = new int[4];
    int i;

    for (i = 0; i < 4; i++) {
        num[i] = i * 10;
    }

    for (i = 0; i < 4; i++) {
        cout << "num[" << i << "] = " << num[i] << ", ";
    }
    cout << endl;

    delete [] num;

    return 0;
}
