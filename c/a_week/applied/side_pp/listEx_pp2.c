#include <stdio.h>
#include <string.h>
#include <malloc.h>

int createMemory(char**, int);
void freeMemory(char**);

void main() {
    char* s = NULL;
    createMemory(&s, 255);

    strcpy(s, "HelloWorld!\n");
    printf("%s", s);
    freeMemory(&s);
}

int createMemory(char** mem, int size) {
    if (*mem == NULL) {
        *mem = (char*)malloc(sizeof(char) * size);
        if (*mem == 0) {
            return -1;
        }
        return 0;
    }
    return -1;
}

void freeMemory(char** mem) {
    if (mem != 0) {
        free(*mem);
    }
}
