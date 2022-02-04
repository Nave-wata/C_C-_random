#include <stdio.h>
#include <string.h>

void main() {
    char str1[50], str2[50];

    printf("文字列1：");
    scanf("%s", str1);
    printf("文字列2：");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("同じものです");
    } else {
        printf("異なるものです");
    }
}
