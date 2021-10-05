//  Rectangle.cpp

#include "Rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(){
    std::cout << "CALLED    Rectangle::Rectangle()" << std::endl;
}

Rectangle::Rectangle(double width, double height){
    std::cout << "CALLED    Rectangle::Rectangle(double width, double height)" << std::endl;
    std::cout << "uninitialized member width    " << m_width << "\nuninitialized member height  " << m_height << std::endl;
    m_width = height;
    m_height = height;
    std::cout << "member width has now be assigned  " << m_width << std::endl;
    std::cout << "member height has now beenn assigned  " << m_height << std::endl;
}

Rectangle::~Rectangle(){}

double Rectangle::area() const {
    std::cout << "CALLED    double Rectangle::area const()" << std::endl;
    return(m_width*m_height);
}

void Rectangle::setWidth(double width){
    std::cout << "CALLED    void Rectangle::setWidth" << std::endl;
    m_width = width;
}

void Rectangle::setHeight(double height){
    std::cout << "CALLED    void Rectangle::setHeight(double height)" << std::endl;
    std::cout << "height is " << m_height << std::endl;
    m_height = height;
}

std::string Rectangle::shapeName() const {
    std::cout << "CALLED    std::string Rectangle::shapeName() const" << std::endl;
    return ("Rectangle");
}
