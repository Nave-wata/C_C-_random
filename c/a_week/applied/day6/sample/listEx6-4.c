#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    int i;
    char wData[] = { 0x10, 0x1a, 0x1e, 0x1f };
    char rData[4];

    file = fopen("./../random/test.bin", "wb");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }
    fwrite(wData, sizeof(char), sizeof(wData), file);
    fclose(file);

    file = fopen("./../random/test.bin", "rb");
    if (file == NULL) {
        printf("File is not open\n");
        exit(1);
    }
    fread(rData, sizeof(char), sizeof(rData), file);
    fclose(file);

    for (i = 0; i < sizeof(rData); i++) {
        printf("%x ", rData[i]);
    }
    printf("\n");
}
