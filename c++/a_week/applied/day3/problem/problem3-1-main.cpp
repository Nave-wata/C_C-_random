#include <iostream>
#include <string>

using namespace std;

template <typename T>
T m_max(T a, T b);
template <>
string m_max(string a, string b);

int main() {
    cout << m_max<int>(1, 2) << endl;
    cout << m_max<double>(1.75, 3.12) << endl;
    cout << m_max<string>("aiu", "eo") << endl;

    return 0;
}

template <typename T>
T m_max(T a, T b) {
    if (a < b) {
        return b;
    }
    return a;
}

template <>
string m_max(string a, string b) {
    if (a.length() < b.length()) {
        return b;
    }
    return a;
}
