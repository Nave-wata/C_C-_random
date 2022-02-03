#include <stdio.h>
#include <malloc.h>

void main() {
    int *array = NULL;
    int i;

    for (i = 0; i < 10; i++) {
        array[i] = i;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
