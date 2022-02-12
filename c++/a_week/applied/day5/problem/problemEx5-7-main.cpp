#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<char> stk;
    std::string str;

    std::cout << "英単語を入力: ";
    std::cin >> str;
    std::cout << std::endl;

    for (int i = 0; i < str.size(); i++) {
        stk.push(str[i]);
    }

    while (!stk.empty()) {
        std::cout << stk.top();
        stk.pop();
    }
    std::cout << std::endl;

    return 0;
}
