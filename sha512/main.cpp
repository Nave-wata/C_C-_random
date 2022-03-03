#include <iostream>
#include "SHA512.h"

int main() {
    std::string text = "a";
    SHA512 sha512;

    text = sha512.hash(text);

    std::cout << "result: " << text << std::endl;

    return 0;
}
