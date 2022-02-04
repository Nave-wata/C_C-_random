#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    FILE* file;
    int max = 0, num = 0;
    int c;

    file = fopen("./../random/score.txt", "r");
    if (file == NULL) {
        printf("File is not found\n");
        exit(1);
    }

    printf("プレイヤー得点\n");
    printf("---------------------\n");
    while ((c = fgetc(file)) != EOF) {
        if (c == 44) {
            printf(" ");
        } else if (c == 10) {
            printf("点");
            printf("\n");
            if (max < num / 10) {
                max = num / 10;
            }
            num = 0;
        } else {
            printf("%c", (char)c);

            if (48 <= c && c <= 57) {
                num += c - '0';
                num *= 10;
            }
        }
    }
    fclose(file);
    printf("---------------------\n");
    printf("最高得点 : Steve(%d点)\n", max);
}
