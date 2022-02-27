#include <iostream>
#include <time.h>
#include "SHA512.h"

int main() {
    int start = clock();
    std::string text = "Hello world";
    SHA512 sha512;

    for (int i = 0; i < 10000; i++) {
        text = sha512.hash(text);
    }

    int end = clock();
    std::cout << "result: " << text << std::endl;
    std::cout << "time: "<< double(end - start) / CLOCKS_PER_SEC << std::endl;

        int start = clock();
    std::string text = "Hello world";
    SHA512 sha512;

    for (int i = 0; i < 10000; i++) {
        text = sha512.hash(text);
    }

    int end = clock();
    std::cout << "result: " << text << std::endl;
    std::cout << "time: "<< double(end - start) / CLOCKS_PER_SEC << std::endl;
    return 0;
}
