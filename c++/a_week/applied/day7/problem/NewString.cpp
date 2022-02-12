#include "NewString.h"

//  コンストラクタ
NewString::NewString() {
    m_value = "";
}

//  値を代入するコンストラクタ①（文字列から）
NewString::NewString(std::string value) {
    m_value = value;
}

//  値を代入するコンストラクタ②（他のクラスから)
NewString::NewString(NewString& value) {
    m_value = value.getValue();
}

//  値を代入
NewString& NewString::operator= (NewString& n) {
    m_value = n.getValue();
    return *this;
}

bool NewString::operator == (NewString& n) {
    if (m_value == n.m_value) {
        return true;
    } else {
        return false;
    }
}

//  stringで値を取得
std::string NewString::getValue() {
    return m_value;
}
