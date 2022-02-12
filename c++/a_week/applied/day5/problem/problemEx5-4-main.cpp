#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<char> set;
    std::string str;

    std::cout << "英単語を入力: ";
    std::cin >> str;

    for (int i = 0; i < str.size(); i++) {
        set.insert(str[i]);
    }

    std::cout << "使用されているアルファベット: ";
    std::set<char>::iterator itr;
    for (itr = set.begin(); itr != set.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}
