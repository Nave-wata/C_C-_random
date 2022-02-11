#include <iostream>
#include <set>
#include <random>

int main() {
    std::set<int> set;
    std::random_device rand;

    std::cout << "乱数: ";
    for (int i = 0; i < 10; i++) {
        const int num = rand() % 10 + 1;

        std::cout << num << " ";
        set.insert(num);
    }
    std::cout << std::endl;

    std::cout << "出現した数: ";
    std::set<int>::iterator itr;
    for (itr = set.begin(); itr != set.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}
