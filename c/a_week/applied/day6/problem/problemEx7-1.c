#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE* file;

    file = fopen("./../random/HelloWorld.txt", "w");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }

    fprintf(file, "HelloWorld!");
    fclose(file);
}
