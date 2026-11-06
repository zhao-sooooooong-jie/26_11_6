#include "Circle.h"

namespace{
    constexpr double Pi = 3.14;
}

double Circle::area() const{
    return Pi * m_r * m_r;
}