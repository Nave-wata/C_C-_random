#include <iostream>
#include <string>
#include <map>

using std::string;
using std::cout;
using std::endl;

int main() {
    std::map<string, string> map;
    string english[] = {"cat", "dog", "bird", "tiger"};
    string japanese[] = {"猫", "犬", "鳥", "トラ"};

    for (int i = 0; i < 4; i++) {
        map[english[i]] = japanese[i];
    }

    string str;

    cout << "英語で動物の名前を入力して下さい: ";
    std::cin >> str;
    cout << "「" << map[str] << "」です" << endl;

    return 0;
}
