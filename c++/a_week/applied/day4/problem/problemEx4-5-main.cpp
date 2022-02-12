#include <iostream>
#include <list>

using namespace std;

int main() {
    int n;
    list<int> l;

    cout << "正の整数を入力: ";
    cin >> n;
    while (n != -1) {
        l.push_back(n);
        cout << "正の整数を入力: ";
        cin >> n;
    }

    l.remove(2);
    list<int>::iterator itr;

    for (itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
