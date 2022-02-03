#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int i, num;
    int min = 10, max = 1;

    srand((unsigned) time(NULL));
    for (i = 0; i < 5; i++) {
        num = rand() % 10 + 1;
        printf("%d ", num);

        if (num < min) {
            min = num;
        }
        if (max < num) {
            max = num;
        }
    }

    printf("\n");
    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);
}
