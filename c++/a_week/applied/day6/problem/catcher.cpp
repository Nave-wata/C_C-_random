#include "catcher.h"

Catcher::Catcher(std::string name,int number) {
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}

void Catcher::play() {
    std::cout << "投球する" << std::endl;
}
