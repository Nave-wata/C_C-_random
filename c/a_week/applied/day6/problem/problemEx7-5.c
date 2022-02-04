#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    FILE* file;
    int sum = 0, num = 0;
    int c;

    file = fopen("./../random/nums.txt", "r");
    if (file == NULL) {
        printf("File is not found\n");
        exit(1);
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == 44 || c == 10) {
            printf("\n");
            sum += num / 10;
            num = 0;
        } else {
            printf("%c", (char)c);
            num += c - '0';
            num *= 10;
        }
    };
    fclose(file);
    printf("---------\n");
    printf("合計%d\n", sum);
}
