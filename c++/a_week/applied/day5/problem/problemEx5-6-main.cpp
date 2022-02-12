#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<std::string> stk;
    std::string str;

    while (true) {
        std::cout << "文字列を入力: ";
        if (getline(std::cin, str) && str.empty()) {
            break;
        } else {
            stk.push(str);
        }
    }
    std::cout << std::endl;

    while (!stk.empty()) {
        std::cout << stk.top() << std::endl;
        stk.pop();
    }
    std::cout << std::endl;

    return 0;
}
