//  ShapeContainer.h

#ifndef ShapeContainer_h
#define ShapeContainer_h

#include "Shape.h"
#include <stdio.h>
#include <stdexcept>

class ShapeContainer {
    
public:
    ShapeContainer(int size);
    ~ShapeContainer();
    
    double area(int index) const;
    std::string shapeName(int index) const;
    
    void add(Shape* shape_ptr, int index);
    void remove(int index);
    
private:
    Shape** m_array_of_shapes;
    int m_size;
    
};

#endif /* ShapeContainer_h */

