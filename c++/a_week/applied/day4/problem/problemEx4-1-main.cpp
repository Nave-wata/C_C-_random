#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i;
    vector<int> v;

    cout << "正の整数を入力: ";
    cin >> i;
    while (i != -1) {
        v.push_back(i);
        cout << "正の整数を入力: ";
        cin >> i;
    }

    cout << "偶数: ";
    for (i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl << "奇数: ";
    for (i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 1) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
