#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main() {
    int i, a;

    srand((unsigned) time(NULL));

    for (i = 0; i < 4; i++) {
        a = rand() % 20 + 1 - 10;
        printf("%dつ目の数値 : %d, 絶対値 : %d\n", i + 1, a, abs(a));
    }
}
