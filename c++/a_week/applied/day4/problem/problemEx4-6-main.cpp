#include <iostream>
#include <list>

using namespace std;

int main() {
    int n;
    list<int> l;
    list<int>::iterator itr;

    cout << "正の整数を入力: ";
    cin >> n;
    l.push_back(n);

    while (n != -1) {
        cout << "入力された数:   ";
        for (itr = l.begin(); itr != l.end(); itr++) {
            cout << *itr << " ";
        }
        cout << endl << "正の整数を入力: ";
        cin >> n;

        l.push_back(n);
        l.sort();
    }

    return 0;
}
