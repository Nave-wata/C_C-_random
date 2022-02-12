#ifndef _NEW_STRING_H_
#define _NEW_STRING_H_

#include <iostream>
#include <string>

using namespace std;

class NewString{
private:
    //  文字列
    string m_value;
public:
    //  コンストラクタ
    NewString();
    //  値を代入するコンストラクタ①（文字列から）
    NewString(string value);
    //  値を代入するコンストラクタ②（他のクラスから)
    NewString(NewString& value);
    //  値を代入
    NewString& operator= (NewString& n);
    //  stringで値を取得
    string getValue();
};

#endif // _NEW_STRING_H_
