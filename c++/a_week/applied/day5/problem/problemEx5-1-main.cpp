#include <iostream>
#include <string>
#include <map>

using std::string;
using std::cout;
using std::endl;

int main() {
    std::map<string, string> map;
    const string english[] = {"cat", "dog", "bird", "tiger"};
    const string japanese[] = {"猫", "犬", "鳥", "トラ"};

    for (int i = 0; i < 4; i++) {
        map[english[i]] = japanese[i];
    }

    cout << "英語で動物の名前を入力して下さい: ";
    string str;
    std::cin >> str;

    if (map.find(str) != map.end()) {
        cout << "「" << map[str] << "」です" << endl;
    } else {
        cout << "対応するデータは登録されていません" << endl;
    }

    return 0;
}
