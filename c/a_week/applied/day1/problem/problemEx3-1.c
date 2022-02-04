#include <stdio.h>
#include <string.h>

void main() {
    unsigned char a = 0x20;
    unsigned char b[100];
    int i;

    printf("Input words : ");
    scanf("%s", &b);

    for (i = 0; i < strlen(b); i++) {
        printf("%c", b[i] | a);
    }
    printf("\n");
}
