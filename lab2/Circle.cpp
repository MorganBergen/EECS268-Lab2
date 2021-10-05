// Circle.cpp

#include "Circle.h"
#include <iostream>
#include <string>

Circle::Circle(){}

Circle::Circle(double radius){
    std::cout << "the circle constructor has been called" << std::endl;
    m_radius = radius;
    std::cout << "radius has been set to " << m_radius << std::endl;
}

void Circle::setRadius(double radius){
    m_radius = radius;
}

double Circle::area() const {
    return (3.14159*m_radius*m_radius);
}

std::string Circle::shapeName() const {
    return("Circle");
}

Circle::~Circle(){}
