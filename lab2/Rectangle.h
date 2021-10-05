//  Rectangle.h

#ifndef Rectangle_h
#define Rectangle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Rectangle : public Shape {
private:
    double m_width;
    double m_height;
    
public:
    Rectangle();
    Rectangle(double width, double height);
   
    void setWidth(double width);
    void setHeight(double height);
    
    virtual double area() const;
    virtual std::string shapeName() const;
    virtual ~Rectangle();
};

#endif /* Rectangle_h */
