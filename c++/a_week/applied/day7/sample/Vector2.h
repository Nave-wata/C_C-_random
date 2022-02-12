#ifndef _VECTOR2_H_
#define _VECTOR2_H_

#include <iostream>
#include <string>

class Vector2 {
    public:
        double x;
        double y;

    public:
        Vector2& operator = (const Vector2& v); // = 演算子のオーバーロード
        Vector2& operator += (const Vector2& v); // += 演算子のオーバーロード
        Vector2& operator -= (const Vector2& v); // -= 演算子のオーバーロード
};

Vector2 operator + (const Vector2&, const Vector2&); // + 演算子のオーバーロード

Vector2 operator - (const Vector2&, const Vector2&);// - 演算子のオーバーロード

Vector2 operator * (const double, const Vector2& v); // * 演算子のオーバーロード

#endif // _VECTOR2_H_
