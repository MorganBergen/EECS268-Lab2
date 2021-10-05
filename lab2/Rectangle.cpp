//  Rectangle.cpp

#include "Rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(){}

Rectangle::Rectangle(double width, double height){
    std::cout << "the rectangle constructor has been called" << std::endl;
    m_width = height;
    m_height = height;
}

void Rectangle::setWidth(double width){
    m_width = width;
}

void Rectangle::setHeight(double height){
    m_height = height;
}

double Rectangle::area() const {
    return(m_width*m_height);
}

std::string Rectangle::shapeName() const {
    return ("Rectangle");
}

Rectangle::~Rectangle(){}
