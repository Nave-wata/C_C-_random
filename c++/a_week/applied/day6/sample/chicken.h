#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class Chicken : public Bird {
    public:
        void sing();
        void fly();
};

void Chicken::sing() {
    std::cout << "コケッコッコー" << std::endl;
}

void Chicken::fly() {
    std::cout << "にわとりは飛べません" << std::endl;
}

#endif // _CHICKEN_H_
