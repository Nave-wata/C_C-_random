#include <stdio.h>

void connectStr(char*, char*);
void showStr(char*);

void main() {
    char str1[100], str2[100], str3[100];

    printf("文字列1：");
    scanf("%s", str1);

    printf("文字列2：");
    scanf("%s", str2);

    connectStr(str1, str2);

    printf("結合した結果：");
    showStr(str1);
}

void connectStr(char* a, char* b) {
    while(*a++); // *pを出力後，p++ (https://qiita.com/1024chon/items/f17ee5afc6644cfd33f1)
    a--;
    while(*a++ = *b++);
}

void showStr(char* a) {
    while(*a) {
        printf("%c", *a);
        a++;
    }
}
