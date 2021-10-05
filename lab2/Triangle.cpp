//  Triangle.cpp

#include "Triangle.h"
#include <iostream>
#include <string>

Triangle::Triangle(){}

Triangle::Triangle(double base, double height){
    std::cout << "the triangle constructor has been called" << std::endl;
    m_base = base;
    m_height = height;
    std::cout << "base has been set to " << m_base << std::endl;
    std::cout << "height has been set to " << m_height << std::endl;
}

void Triangle::setBase(double base){
    m_base = base;
}

void Triangle::setHeight(double height){
    m_height = height;
}

double Triangle::area() const {
    return (0.5*m_base*m_height);
}

std::string Triangle::shapeName() const {
    return("Triangle");
}

Triangle::~Triangle(){}
