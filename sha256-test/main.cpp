// https://github.com/ishida0219/sha256

#include <time.h>

#include <iostream>

#include "SHA256.h"

int main() {
    clock_t start = clock();
    int count = 0;
        const char* message = "test1";

        unsigned int H[INIT_HASH_LENGTH];
        SHA256 sha256;
        unsigned char** result = sha256.padding((char*)message);

    do {
        sha256.compute(result, H);
        result = sha256.padding((char*)H);
        count++;
    } while (count < 10000);

    std::cout << "result:" << std::endl << sha256.hash_return(H) << std::endl;
    sha256.print_hash(H);

    sha256.free_block(result);
    std::cout << "result: " << (double)(clock()-start) / CLOCKS_PER_SEC << std::endl;

    return 0;
}
