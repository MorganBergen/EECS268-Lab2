//  Triangle.cpp

#include "Triangle.h"
#include <iostream>
#include <string>

Triangle::Triangle(){}

Triangle::Triangle(double base, double height){
    std::cout << "triangle constructor has been called" << std::endl;
    m_base = base;
    m_height = height;
}

void Triangle::setBase(double base){
    std::cout << "triangle setBase method has been called" << std::endl;
    m_base = base;
}

void Triangle::setHeight(double height){
    std::cout << "triangle setHeight method has been called" << std::endl;
    m_height = height;
}

double Triangle::area() const {
    return (0.5*m_base*m_height);
}

std::string Triangle::shapeName() const {
    return("Triangle");
}

Triangle::~Triangle(){}
