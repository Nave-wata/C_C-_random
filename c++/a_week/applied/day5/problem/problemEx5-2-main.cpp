#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<char, std::string> map;
    const char Numbers[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    const std::string JPNumbers[] = {"一", "二", "三", "四", "五", "六", "七", "八", "九", "〇"};

    for (int i = 0; i < 10; i++) {
        map[Numbers[i]] = JPNumbers[i];
    }

    std::cout << "整数の値を入力して下さい: ";
    std::string str;
    std::cin >> str;

    bool flag = true;
    for (int i = 0; i < str.size(); i++) {
        if (map.find(str[i]) == map.end()) {
            std::cout << "整数値を入力して下さい";
            flag = false;
            break;
        }
    }

    if (flag) {
        for (int i = 0; i < str.size(); i++) {
            if (map.find(str[i]) != map.end()) {
                std::cout << map[str[i]];
            }
            if ((str.size() - i - 1) % 3 == 0 && i != str.size() - 1) {
                std::cout << ",";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
