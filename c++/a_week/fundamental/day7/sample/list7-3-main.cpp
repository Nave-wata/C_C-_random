#include "sup1.h"
#include "sub1.h"

int main() {
    Sup1 *pS1;
    Sub1 *pS2;

    pS1 = new Sup1();
    pS2 = new Sub1();

    pS1->func();
    pS2->func();

    delete pS1, pS2;

    return 0;
}
