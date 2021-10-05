//  Triangle.h

#ifndef Triangle_h
#define Triangle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Triangle : public Shape {
private:
    double m_base;
    double m_height;
    
public:
    Triangle();
    Triangle(double base, double height);
    
    void setBase(double base);
    void setHeight(double height);
    
    virtual double area() const;
    virtual std::string shapeName() const;
    virtual ~Triangle();
    
};

#endif /* Triangle_h */
