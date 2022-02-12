#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

class Crow : public Bird {
    public:
        void sing();
        void fly();
};

void Crow::sing() {
    std::cout << "カーカー" << std::endl;
}

void Crow::fly() {
    std::cout << "カラスが飛びます" << std::endl;
}

#endif // _CROW_H_
