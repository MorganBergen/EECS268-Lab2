//  Shape.h

#ifndef Shape_h
#define Shape_h

#include <string>

class Shape {
    
public:
    virtual double area() const = 0;
    virtual std::string shapeName() const = 0;
    virtual ~Shape() {};
};

#endif
