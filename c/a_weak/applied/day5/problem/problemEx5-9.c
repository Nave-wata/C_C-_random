#include <stdio.h>
#include <malloc.h>

void showReStr(char*);

void main() {
    char *str = NULL;

    str = (char*)malloc(sizeof(char) * 16);

    printf("文字列を入力（最大16文字）：");
    scanf("%s", str);

    showReStr(str);
}

void showReStr(char* str) {
    while(*str++);
    str--;
    str--;
    while(*str) {
        printf("%c", *str);
        str--;
    }
}
