//  Rectangle.cpp

#include "Rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(){}

Rectangle::Rectangle(double width, double length){
    std::cout << "the rectangle constructor has been called" << std::endl;
    m_width = width;
    m_length = length;
    std::cout << "width has been set to " << m_width << std::endl;
    std::cout << "length has been set to " << m_length << std::endl;
}

void Rectangle::setWidth(double width){
    m_width = width;
}

void Rectangle::setlength(double length){
    m_length = length;
}

double Rectangle::area() const {
    return(m_width*m_length);
}

std::string Rectangle::shapeName() const {
    return ("Rectangle");
}

Rectangle::~Rectangle(){}
