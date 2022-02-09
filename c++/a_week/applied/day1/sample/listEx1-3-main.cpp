#include <iostream>

using namespace std;

struct data {
    int n;
    double d;
};

int main() {
    data dt;

    dt.n = 100;
    dt.d = 12.34;

    cout << "dt.n = " << dt.n << endl << "dt.d = " << dt.d << endl;

    return 0;
}
