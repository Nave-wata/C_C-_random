#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j;
    bool flag;
    vector<int> v;

    cout << "正の整数を入力: ";
    cin >> i;
    while (i != -1) {
        v.push_back(i);
        cout << "正の整数を入力: ";
        cin >> i;
    }

    for (i = 0; i < 10; i++) {
        flag = false;
        cout << "一の位が" << i << ": ";

        if (i == 0) {
            for (j = 0; j < v.size(); j++) {
                if (v[j] % 10 == 0) {
                    cout << v[j] << " ";
                    flag = true;
                }
            }
        } else {
            for (j = 0; j < v.size(); j++) {
                if (v[j] % 10 == i) {
                    cout << v[j] << " ";
                    flag = true;
                }
            }
        }

        if (!flag) {
            cout << "なし" << endl;
        } else {
            cout << endl;
        }
    }

    return 0;
}
