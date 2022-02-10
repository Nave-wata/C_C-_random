#include <iostream>
#include <string>

using namespace std;

int max(int, int);
double max(double, double);
string max(string, string);

int main() {
    cout << max(1, 2) << endl;
    cout << max(1.75, 3.12) << endl;
    string s1 = "aiu", s2 = "eo";
    cout << max(s1, s2) << endl;

    return 0;
}

int max(int a, int b) {
    if (a < b) {
        return b;
    }
    return a;
}

double max(double a, double b) {
    if (a < b) {
        return b;
    }
    return a;
}

string max(string a, string b) {
    if (a.length() < b.length()) {
        return b;
    }
    return a;
}
