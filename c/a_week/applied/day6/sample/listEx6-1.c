#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;

    file = fopen("./../random/sample.txt", "w");
    if (file == NULL) {
        printf("File is not found\n");
        exit(1);
    }

    fprintf(file, "Hello World!\n");
    fprintf(file, "ABCDEF\n");
    fclose(file);
}
