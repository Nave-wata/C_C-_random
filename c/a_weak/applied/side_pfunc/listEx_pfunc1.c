#include <stdio.h>

void func1();
void func2();

void main() {
    void (*fp)() = func1;
    fp();
    fp = func2;
    fp();
}

void func1() {
    printf("func1\n");
}

void func2() {
    printf("func2\n");
}
