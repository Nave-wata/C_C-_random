#include <stdio.h>

void main() {
    int *p = NULL;
    *p = 1; // 該当するアドレスに値を入れないと異常終了する．
}
