#include <iostream>
#include "Vector2.h"

void vec(std::string, Vector2&);

int main(){
    Vector2 v1,v2,v3, tmp;
    //  ベクトルに値を代入
    v1.x = 1.0;
    v1.y = 2.0;
    v2 = v1;            //  値を代入
    v3 = 4.0 * v1;      //  ベクトルのスカラー倍
    vec("v1=", v1);
    vec("v2=", v2);
    tmp = v1 + v2;
    vec("v1 + v2=", tmp);
    vec("v3=", v3);
    v3 += v1;           //  代入演算子（+=）
    vec("v3=",v3);
    v1 -= v2;           //  代入演算子（-=）
    vec("v1=", v1);
    return 0;
}

void vec(std::string vecname, Vector2& v) {
    std::cout << vecname << "(" << v.x << "," << v.y << ")" << std::endl;
}
