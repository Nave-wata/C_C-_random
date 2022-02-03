#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int a, b;

    srand((unsigned) time(NULL)); // 乱数の初期化
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    printf("a = %d, b = %d\n", a, b);
}
