#include <stdio.h>
#include <string.h>

void main() {
    char str1[50], str2[50], str3[50];
    char cnt1, cnt2, cnt3;

    printf("文字列1：");
    scanf("%s", str1);
    cnt1 = strlen(str1);

    printf("文字列2：");
    scanf("%s", str2);
    cnt2 = strlen(str2);

    printf("文字列3：");
    scanf("%s", str3);
    cnt3 = strlen(str3);

    printf("最も長い文字列：\n");
    if (cnt1 < cnt2) {
        if (cnt2 < cnt3) {
            printf("%s", str3);
        } else if (cnt3 < cnt2) {
            printf("%s", str2);
        } else {
            printf("%s\n%s", cnt2, cnt3);
        }
    } else if (cnt2 < cnt1) {
        if (cnt1 < cnt3) {
            printf("%s", str3);
        } else if (cnt3 < cnt1) {
            printf("%s", str1);
        } else {
            printf("%s\n%s", str1, str3);
        }
    } else {
        if (cnt2 < cnt3) {
            printf("%s", str3);
        } else {
            printf("%s\n%s", str2, str3);
        }
    }
    printf("\n");
}
