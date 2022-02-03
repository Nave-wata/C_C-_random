#include <stdio.h>
#include <malloc.h>

void main() {
    double *a = NULL;
    int i;

    a = (double*)malloc(sizeof(double) * 3);
    for (i = 0; i < 3; i++) {
        a[i] = 0.1 * i;
    }

    for (i = 0; i < 3; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");
    free(a);
}
