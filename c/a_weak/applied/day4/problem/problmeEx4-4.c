#include <stdio.h>
#include <malloc.h>

#define SIZE 6

void main() {
    double *a = NULL;
    int i;

    a = (double*)malloc(sizeof(double) * SIZE);
    for (i = 0; i < SIZE; i++) {
        a[i] = 0.1 * i;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");
    free(a);
}
