#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    int c;
    file = fopen("./../random/sample.txt", "r");
    if (file == NULL) {
        printf("File is not found\n");
        exit(1);
    }

    while ( (c=fgetc(file)) != EOF){
        printf("%c",(char)c);
    }
    fclose(file);
}
