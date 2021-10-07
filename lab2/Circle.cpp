// Circle.cpp

#include "Circle.h"
#include <iostream>
#include <string>

Circle::Circle(){
//    std::cout << "\ncircle default constructor has been called" << std::endl;
}

Circle::Circle(double radius){
//    std::cout << "\ncircle constructor has been called and the radius has been set to ";
    m_radius = radius;
//    std::cout << m_radius << std::endl;
}

void Circle::setRadius(double radius){
//    std::cout << "\ncircle setRadius method has been called" << std::endl;
    m_radius = radius;
}

double Circle::area() const {
    return (3.14159*m_radius*m_radius);
}

std::string Circle::shapeName() const {
    return("Circle");
}

Circle::~Circle(){}
