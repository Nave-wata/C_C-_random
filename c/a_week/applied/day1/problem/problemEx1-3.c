#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int a[5];
    int i;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    srand((unsigned) time(NULL));

    for (i = 0; i < 5; i++) {
        a[i] = rand() % (100 + 1);
        printf("%d ", a[i]);

        if (80 < a[i]) {
            cnt3 += 1;
        } else if (20 <= a[i] && a[i] <= 50) {
            cnt2 += 1;
        } else if (0 <= a[i] && a[i] < 10) {
            cnt1 += 1;
        }
    }

    printf("\n");
    printf("20以上50以下の数 : %d個\n", cnt2);
    printf("80より大きい数 : %d個\n", cnt3);
    printf("0以上10未満の数 : %d個\n", cnt1);
}
