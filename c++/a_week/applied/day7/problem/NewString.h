#ifndef _NEW_STRING_H_
#define _NEW_STRING_H_

#include <iostream>
#include <string>

using namespace std;

class NewString{
    private:
        string m_value; // 文字列

    public:
        NewString(); //  コンストラクタ
        NewString(string value); // 値を代入するコンストラクタ①（文字列から）
        NewString(NewString& value); // 値を代入するコンストラクタ②（他のクラスから)
        NewString& operator= (NewString& n); // 値を代入
        bool operator == (NewString& n);
        string getValue(); // stringで値を取得
};

#endif // _NEW_STRING_H_
