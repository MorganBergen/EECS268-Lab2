//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeContainer.h"


int main(int argc, const char * argv[]) {
    
    int size;
    std::cout << "enter size: ";
    std::cin >> size;
    
    ShapeContainer* container = nullptr;
    container = new ShapeContainer(size);
    
    
    return 0;
}


/*Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...*/











