//  Circle.h

#ifndef Circle_h
#define Circle_h
#include <string>
#include "Shape.h"

#include <stdio.h>

class Circle : public Shape {
    
private:
    double m_radius;
    
public:
    Circle();
    Circle(double radius);
    ~Circle();
    double area() const;
    void setRadius(double radius);
    std::string shapeName() const;
    
};

#endif /* Circle_hpp */
