//  Triangle.cpp

#include "Triangle.h"
#include <iostream>
#include <string>

Triangle::Triangle(){
    std::cout << "called default constructor" << std::endl;
}

Triangle::Triangle(double base, double height){
    m_base = base;
    m_height = height;
}

Triangle::~Triangle(){}

double Triangle::area() const {
    return (0.5*m_base*m_height);
}

void Triangle::setBase(double base){
    std::cout << "called setBase method" << std::endl;
    m_base = base;
}

void Triangle::setHeight(double height){
    m_height = height;
}

std::string Triangle::shapeName() const {
    return("Triangle");
}
