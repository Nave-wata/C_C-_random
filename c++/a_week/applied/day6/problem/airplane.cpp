#include "airplane.h"

std::string Airplane::getType() {
    return m_type;
}

void Airplane::fly() {
    std::cout << "飛行機が飛行します" << std::endl;
}
