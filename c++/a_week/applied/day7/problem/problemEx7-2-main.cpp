#include <iostream>
#include <string>
#include "NewString.h"

int main(){
    NewString s1("HelloWorld");
    cout << s1.getValue() << endl;

    NewString s2;
    s2 = s1;    //  値を代入
    cout << s2.getValue() << endl;

    NewString s3(s2);   //  NewStringを引数としてコンストラクタ呼び出し
    cout << s3.getValue() << endl;

    NewString s4("HELLOWORLD");
    cout << s4.getValue() << endl;
    return 0;
}
