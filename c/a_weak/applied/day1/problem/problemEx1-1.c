#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int i, num;
    srand((unsigned) time(NULL));

    for (i = 0; i < 5; i++) {
        printf("%d ", rand() % 10 + 1);
    }
}
