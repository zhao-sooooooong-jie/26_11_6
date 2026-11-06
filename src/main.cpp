#include<iostream>
#include"Circle.h"
#include"Rectangle.h"

int main(){
    Shape * r1 = new Circle(1.0);
    std::cout << r1->area() << std::endl;
    delete r1;
    return 0;
}