#include <stdio.h>

int max(int, int);
int min(int, int);

void main() {
    int (*cmp)(int, int) = max;
    int a = 1, b = 2;

    printf("%dと%dのうち，最大のものは%d\n", a, b, cmp(a, b));

    cmp = min;
    printf("%dと%dのうち，最小のものは%d\n", a, b, cmp(a, b));
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}
