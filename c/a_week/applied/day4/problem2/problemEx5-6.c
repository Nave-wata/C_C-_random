#include <stdio.h>

int jdgStr(char*, char*);

void main() {
    char str1[50], str2[50];

    printf("文字列1：");
    scanf("%s", str1);
    printf("文字列2：");
    scanf("%s", str2);

    if (jdgStr(str1, str2) == 0) {
        printf("同じものです");
    } else {
        printf("異なるものです");
    }
}

int jdgStr(char* str1, char* str2) {

    while(*str1 && *str2) {
        if (*str1  != *str2) {
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}
