#include <stdio.h>

void main() {
    int *p = NULL;
    *p = 1; // アドレスを入れないで数字だけ入れようとするとコンパイルは通っても異常終了する．
}
