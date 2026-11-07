#include"Rectangle.h"

double Rectangle::area() const{
    LOG_DEBUG("Rectangle::area width:" << m_w << " height:" << m_h);
    return m_w * m_h;
}
