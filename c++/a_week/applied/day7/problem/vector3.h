#ifndef _VECTOR3_H_
#define _VECTOR3_H_

class Vector3 {
    public:
        double x;
        double y;
        double z;

    public:
        Vector3& operator = (const Vector3&);
        Vector3& operator += (const Vector3&);
        Vector3& operator -= (const Vector3&);
};

Vector3 operator + (const Vector3&, const Vector3&);
Vector3 operator * (const double, const Vector3&);

#endif // _VECTOR3_H_
