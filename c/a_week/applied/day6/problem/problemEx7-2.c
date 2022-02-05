#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void main() {
    FILE* file;
    char str[SIZE];
    str[0] = '\0';

    file = fopen("./../random/sample2.txt", "r");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }

    while (fgets(str, SIZE, file) != NULL) {
        printf("%s", str);
    }
    fclose(file);
}
