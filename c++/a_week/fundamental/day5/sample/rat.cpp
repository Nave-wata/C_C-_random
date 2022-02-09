#include "rat.h"
#include <iostream>

using namespace std;

int Rat::m_count = 0;

Rat::Rat() : m_id(0) {
    m_id = m_count;
    m_count++;
}

Rat::~Rat() {
    cout << "ネズミ: " << m_id << "消去" << endl;
    m_count--;
}

void Rat::showNum() {
    cout << "現在のネズミの数は, " << m_count << "匹です" << endl;
}

void Rat::squeak() {
    cout << m_id << ": " << "チューチュー" << endl;
}
