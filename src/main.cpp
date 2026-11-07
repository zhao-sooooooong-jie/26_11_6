#include<iostream>
#include"Circle.h"
#include"Rectangle.h"
#include"Logger.h"

int main(){
    Shape * c1 = new Circle(2.0);
    std::cout << c1->area() << std::endl;
    delete c1;

    Shape * r1 = new Rectangle(2.0, 3.0);
    std::cout << r1->area() << std::endl;
    delete r1;

    LOG_INFO("Program finished successfully.");
    return 0;
}