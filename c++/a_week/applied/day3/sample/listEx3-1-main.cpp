#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y) {
    return x + y;
}

int main() {
    cout << add<int>(4, 3) << endl;             // 数値でadd関数を利用
    cout << add<string>("ABC", "DEF") << endl;  // stringでadd関数を利用
    cout << add(1,2) << endl;                   // 両方ともintの場合，型指定省略可能
    // cout << add("abc", "def") << endl;       // stringの場合，型指定が必要
    // cout << add(1, 2.3) << endl;            // 型が畏怖一致した場合使えない

    return 0;
}
