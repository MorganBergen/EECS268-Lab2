//  Rectangle.h

#ifndef Rectangle_h
#define Rectangle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Rectangle : public Shape {
private:
    double m_width;
    double m_length;
    
public:
    Rectangle();
    Rectangle(double width, double length);
   
    void setWidth(double width);
    void setlength(double length);
    
    virtual double area() const;
    virtual std::string shapeName() const;
    virtual ~Rectangle();
};

#endif /* Rectangle_h */
