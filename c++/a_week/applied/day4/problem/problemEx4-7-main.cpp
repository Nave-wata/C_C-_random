#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int i, max, min;
    string str;
    list<string> l;
    list<string>::iterator itr;

    while (true) {
        cout << "文字列を入力: ";
        if (getline(cin, str) && !str.empty()) {
            l.push_back(str);
        } else {
            break;
        }
    }

    cout << "5文字未満の単語: ";
    for (itr = l.begin(); itr != l.end(); itr++) {
        str = *itr;
        if (5 <= str.length()) {
            //
        } else {
            cout << *itr << " ";
        }
    }
    cout << endl;;

    return 0;
}
