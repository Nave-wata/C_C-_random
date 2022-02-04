#include <stdio.h>
#include <string.h>

void main() {
    char str[50];

    printf("文字列を入力：");
    scanf("%s", str);

    printf("文字列の長さ：%d", strlen(str));
}
