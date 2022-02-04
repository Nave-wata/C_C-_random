#include <stdio.h>
#include <string.h>

void main() {
    char a = 0xDF;
    char b[100];

    printf("Input words : ");
    scanf("%s", &b);

    for (int i = 0; i < strlen(b); i++) {
        printf("%c", b[i] & a);
    }
}
