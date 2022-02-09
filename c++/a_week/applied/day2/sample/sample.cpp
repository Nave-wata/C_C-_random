#include "sample.h"

Sample::Sample() {
    m_str = "";
}

void Sample::setStr(const string str) {
    m_str = str;
}

string Sample::getStr() const {
    return m_str;
}
