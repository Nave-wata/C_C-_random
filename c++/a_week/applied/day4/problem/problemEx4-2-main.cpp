#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, max, min;
    vector<int> v;

    cout << "正の整数を入力: ";
    cin >> i;
    while (i != -1) {
        v.push_back(i);
        cout << "正の整数を入力: ";
        cin >> i;
    }

    max = v[0];
    min = v[0];
    for (i = 0; i < v.size(); i++) {
        if (max < v[i]) {
            max = v[i];
        }
        if (v[i] < min) {
            min = v[i];
        }
    }
    cout << "最大値: " << max << endl << "最小値: " << min << endl;

    return 0;
}
