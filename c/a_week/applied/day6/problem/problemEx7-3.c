#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void main() {
    FILE* file;
    char str[SIZE];
    str[0] = '\0';

    file = fopen("./../random/data.txt", "w");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }

    while (1) {
        str[0] = '\0';
        printf("文字列を入力して下さい : ");
        scanf("%s", str);

        if (strcmp(str, "q") == 0) {
            break;
        }

        fprintf(file, str);
        fprintf(file, "\n");
    }
    fclose(file);
}
