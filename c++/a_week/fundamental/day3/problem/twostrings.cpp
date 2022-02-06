#include "twostrings.h"

using namespace std;

void TwoStrings::setString1(string str) {
    m_string1 = str;
}

void TwoStrings::setString2(string str) {
    m_string2 = str;
}

string TwoStrings::getString1() {
    return m_string1;
}

string TwoStrings::getString2() {
    return m_string2;
}

string TwoStrings::getConnectedString() {
    return m_string1 + m_string2;
}

int TwoStrings::getConnectedLength() {
    return (m_string1 + m_string2).length();
}
