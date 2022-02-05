#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void main() {
    FILE* file;
    int i, size;
    char* rData;

    file = fopen("./../random/test.bin", "rb");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }

    fseek(file, 0, SEEK_END);
    size = ftell(file);

    rData = (char*)malloc(sizeof(char) * size);

    fseek(file, 0, SEEK_SET);
    fread(rData, sizeof(char), size, file);
    fclose(file);

    for (i = 0; i < size; i++) {
        printf("%x ", rData[i]);
    }
    printf("\n");
    free(rData);
}
