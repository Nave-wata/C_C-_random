#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    FILE* file;
    int c;

    file = fopen("./../random/words.txt", "r");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == 44) { // 文字コード利用
            printf("\n");
        } else {
            printf("%c", (char)c);
        }
    }
    fclose(file);
}
