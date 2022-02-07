#include "position2D.h"

void Position2D::resetPosition() {
    init();
}

void Position2D::move(int x, int y) {
    m_x += x;
    m_y += y;
}
