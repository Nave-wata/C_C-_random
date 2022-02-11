#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int i, max, min;
    string str;
    vector<string> v;

    while (true) {
        cout << "文字列を入力: ";
        if (getline(cin, str) && !str.empty()) {
            v.push_back(str);
        } else {
            break;
        }
    }

    max = v[0].length();
    min = v[0].length();
    for (i = 0; i < v.size(); i++) {
        if (max < v[i].length()) {
            max = v[i].length();
        }
        if (v[i].length() < min) {
            min = v[i].length();
        }
    }

    cout << "最長の単語: ";
    for (i = 0; i < v.size(); i++) {
        if (max == v[i].length()) {
            cout << v[i] << " ";
        }
    }

    cout << endl << "最短の単語: ";
    for (i = 0; i < v.size(); i++) {
        if (min == v[i].length()) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
