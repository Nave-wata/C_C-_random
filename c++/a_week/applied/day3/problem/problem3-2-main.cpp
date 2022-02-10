#include <iostream>
#include "collectionint.h"

using namespace std;

int main() {
    int array[] = { 1, 5, 4, 2, 3 };
    CollectionInt* c = new CollectionInt(array, 5);

    c->showArray();

    cout << "最大値: " << c->getMax() << endl;
    cout << "最小値: " << c->getMin() << endl;

    delete c;

    return 0;
}
