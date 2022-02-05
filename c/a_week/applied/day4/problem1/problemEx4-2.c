#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void x2(int*, int);
void showAry(int*, int);

void main() {
    int a[5];
    int i;

    srand((unsigned) time(NULL));

    for (i = 0; i < 5; i++) {
        a[i] = rand() % (100 + 1);
    }

    printf("発生した乱数：\n");
    showAry(a, 5);

    x2(a, 5);
    printf("2倍した値：\n");
    showAry(a, 5);
}

void x2(int* ary, int size) {
    for (int i = 0; i < size; i++) {
        *ary *= 2;
        ary++;
    }
}

void showAry(int* ary, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *ary);
        ary++;
    }
    printf("\n");
}
