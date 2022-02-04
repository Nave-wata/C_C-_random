#include <stdio.h>

void swap(int*, int*);

void main() {
    int a = 1, b = 2;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);
}

void swap(int* num1, int* num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
