#include <iostream>
#include "car.h"

using namespace std;

int main() {
    Car* pC = NULL;
    pC = new Car();

    pC->supply(10);
    pC->move();
    pC->move();

    delete pC;

    cout << "インスタンスの消去終了" << endl;

    return 0;
}
