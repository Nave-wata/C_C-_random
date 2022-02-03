#include <stdio.h>

void main() {
    int nums[] = { 1, 2, 3, 4, 5 };
    int *p = NULL;
    int i;

    p = nums + 5 - 1;
    for (i = 0; i < 5; i++) {
        printf("%d ", *p);
        p--;
    }
    printf("\n");
}
