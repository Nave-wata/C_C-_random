#include <stdio.h>
#include <string.h>

void main() {
    char str1[64], str2[64], str3[64];

    printf("文字列1：");
    scanf("%s", &str1);

    printf("文字列2：");
    scanf("%s", &str2);

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("結合した結果：%s\n", str3);
}
