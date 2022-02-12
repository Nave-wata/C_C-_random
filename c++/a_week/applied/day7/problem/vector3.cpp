#include "vector3.h"

Vector3& Vector3::operator = (const Vector3& v) {
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

Vector3& Vector3::operator += (const Vector3& v) {
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

Vector3& Vector3::operator -= (const Vector3& v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
    return *this;
}

Vector3 operator + (const Vector3& v1, const Vector3& v2) {
    Vector3 v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    v.z = v1.z + v2.z;
    return v;
}

Vector3 operator * (const double d, const Vector3& v1) {
    Vector3 v;
    v.x = d * v1.x;
    v.y = d * v1.y;
    v.z = d * v1.z;
    return v;
}
