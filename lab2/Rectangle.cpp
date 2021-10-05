//  Rectangle.cpp

#include "Rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(){
    std::cout << "CALLED    Rectangle::Rectangle()" << std::endl;
}

Rectangle::Rectangle(double width, double height){
    m_width = height;
    m_height = height;
}

Rectangle::~Rectangle(){}

double Rectangle::area() const {
    return(m_width*m_height);
}

void Rectangle::setWidth(double width){
    m_width = width;
}

void Rectangle::setHeight(double height){
    m_height = height;
}

std::string Rectangle::shapeName() const {
    return ("Rectangle");
}
