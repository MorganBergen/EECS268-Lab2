//  Rectangle.h

#ifndef Rectangle_h
#define Rectangle_h

#include <string>
#include <stdio.h>
#include "Shape.h"

class Rectangle : public Shape {
private:
    double m_height;
    double m_width;
    
public:
    Rectangle();
    Rectangle(double width, double height);
    ~Rectangle();
    double area() const;
    void setWidth(double width);
    void setHeight(double height);
    std::string shapeName() const;
};

#endif /* Rectangle_h */
