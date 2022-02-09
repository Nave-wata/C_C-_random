#ifndef _POSITION2D_H_
#define _POSITION2D_H_

#include "vector2D.h"

class Position2D : public Vector2D {
    public:
        void resetPosition();
        void move(int, int);
};

#endif // _POSITION2D_H_
