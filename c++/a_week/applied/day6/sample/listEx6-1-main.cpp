#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"

int main() {
    Bird *b1 = NULL;
    Bird *b2 = NULL;
    Bird *b3 = NULL;
    b1 = new Crow();
    b2 = new Chicken();
    b3 = new Bird();

    b1->sing();
    b1->fly();
    b2->sing();
    b2->fly();

    return 0;
}
