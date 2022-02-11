#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

class Bird {
    public:
        virtual void sing() = 0;
        void fly();
};

void Bird::fly() {
    std::cout << "鳥が飛びます" << std::endl;
}

#endif // _BIRD_H_
