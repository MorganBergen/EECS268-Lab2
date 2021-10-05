//  Circle.h

#ifndef Circle_h
#define Circle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Circle : public Shape {
    
private:
    double m_radius;
    
public:
    Circle();
    Circle(double radius);
    
    void setRadius(double radius);
    
    virtual double area() const;
    virtual std::string shapeName() const;
    virtual ~Circle();
    
};

#endif /* Circle_hpp */
