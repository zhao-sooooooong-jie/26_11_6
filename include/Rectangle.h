#pragma once
#include "Shape.h"
#include "Logger.h"

class Rectangle : public Shape{
public:
    Rectangle(double w,double h)
    :
    Shape("Rectangle"),
    m_w(w),
    m_h(h){}
    double area() const override;

private:
    double m_w;
    double m_h;
};