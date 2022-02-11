#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> que;
    std::string str;

    while (true) {
        std::cout << "文字列を入力: ";
        if (getline(std::cin, str) && str.empty()) {
            break;
        } else {
            que.push(str);
        }
    }

    while (!que.empty()) {
        std::cout << que.front() << std::endl;
        que.pop();
    }

    return 0;
}
