#include <stdio.h>
#include <string.h>

int numInteger(char*);

void main() {
    char numString[] = "100";
    int num;

    num = numInteger(numString);

    printf("%d\n", num);
}

int numInteger(char* str) {
    int num = 0;

     while(*str) {
         num += *str - 48;
         num *= 10;
         str++;
     }
     num /= 10;

     return num;
}
