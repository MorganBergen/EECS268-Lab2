// Circle.cpp

#include "Circle.h"
#include <iostream>
#include <string>

Circle::Circle(){
    std::cout << "CALLED    Circle::Circle()" << std::endl;
}

Circle::Circle(double radius){
    m_radius = radius;
}

Circle::~Circle(){}

double Circle::area() const {
    return (3.14159*m_radius*m_radius);
}

std::string Circle::shapeName() const {
    
    return("Circle");
}

void Circle::setRadius(double radius){
    m_radius = radius;
    std::cout << "CALLED    void Circle::setRadius(double radius)" << std::endl;
}

