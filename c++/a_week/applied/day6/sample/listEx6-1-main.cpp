#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"

int main() {
    Bird *b1 = new Crow();
    Bird *b2 = new Chicken();
    //Bird *b3 = new Bird();

    b1->sing();
    b1->fly();
    b2->sing();
    b2->fly();

    return 0;
}
