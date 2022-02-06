#include "minmax.h"

int MinMax::min(int a, int b, int c) {
    int min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min  = c;
    }

    return min;
}

int MinMax::max(int a, int b, int c) {
    int max = a;

    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }

    return max;
}
