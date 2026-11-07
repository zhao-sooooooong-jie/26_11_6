#include "Circle.h"
#include "Logger.h"

namespace{
    constexpr double Pi = 3.14;
}

double Circle::area() const{
    LOG_DEBUG("Circle::area radius:" << m_r);
    return Pi * m_r * m_r;
}