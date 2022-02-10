#include <iostream>
#include <string>
#include "collectionint.h"

using namespace std;

int main() {
    string array[] = { "A", "BC", "DEF", "GHIJ", "KLMNO"};
    CollectionInt<string>* c = new CollectionInt<string>(array, 5);

    c->showArray();

    cout << "最大値: " << c->getMax() << endl;
    cout << "最小値: " << c->getMin() << endl;

    delete c;

    return 0;
}
