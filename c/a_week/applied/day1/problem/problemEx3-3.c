#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i, tmp;

    printf("Input Number(0 - 255) : ");
    scanf("%d", &n);

    for (i = 0; i < 8; i++) {
        tmp = n & 0x80;
        if (tmp == 0) {
            printf("0");
        } else {
            printf("1");
        }
        n = n << 1;
    }
    printf("\n");
}
