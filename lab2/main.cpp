//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeContainer.h"


int main(int argc, const char * argv[]) {
    
    int size = 3;
    int radius = 1;
    int width = 2;
    int length = 2;
    
    ShapeContainer* container = nullptr;
    container = new ShapeContainer(size);
    
    Circle* tempCir = new Circle;
    tempCir -> setRadius(radius);
    Rectangle* tempRec = new Rectangle;
    tempRec -> setWidth(width);
    tempRec -> setlength(length);
    
    container -> add(tempCir, 0);
    container -> add(tempRec, 1);
    

    
    return(0);
}


/*Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...*/











