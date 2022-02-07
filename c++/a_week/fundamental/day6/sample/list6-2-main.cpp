#include <iostream>
#include "position2D.h"

using namespace std;

int main() {
    Position2D p;

    p.setValue(1, 1);
    p.move(2, 3);

    cout << "P:(" << p.getX() << ", " << p.getY() << ")" << endl;

    p.resetPosition();

    cout << "P:(" << p.getX() << ", " << p.getY() << ")" << endl;

    return 0;
}
