#include <iostream>
#include <string>
#include "vector3.h"

void vec(const std::string, const Vector3&);

int main() {
    Vector3 v1;
    Vector3 v2;
    Vector3 v3;

    v1.x = 1.0;
    v1.y = 2.0;
    v1.z = 3.0;

    v2 = v1;
    vec("v1 = ", v1);
    vec("v2 = ", v2);
    vec("v1 + v2 = ", v1 + v2);
    v3 = 4.0 * v1;
    vec("v3 = ", v3);
    v1 += v3;
    vec("v1 = ", v1);
    v2 -= v2;
    vec("v2 = ", v2);

    return 0;
}

void vec(const std::string vecName, const Vector3& v) {
    std::cout << vecName << "(" << v.x << ", " << v.y << ", " << v.z << ")" << std::endl;
}
