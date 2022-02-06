#include "minmax.h"

int MinMax::min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int MinMax::max(int a, int b) {
    if (a < b) {
        return b;
    } else {
        return a;
    }
}
