#include <stdio.h>

int countStrlen(char*);

void main() {
    int (*func)(char*) = countStrlen;
    char str[50];

    printf("文字列を入力：");
    scanf("%s", str);

    printf("文字列の長さ：%d文字", func(str));
}

int countStrlen(char* str) {
    int cnt = 0;

    while(*str++) {
        cnt += 1;
    }

    return cnt;
}
