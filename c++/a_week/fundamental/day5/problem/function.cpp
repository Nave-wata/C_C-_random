#include "function.h"

int Function::max(int m, int n) {
    if (m < n) {
        return n;
    }
    return m;
}

int Function::min(int m, int n) {
    if (m < n) {
        return m;
    }
    return n;
}
