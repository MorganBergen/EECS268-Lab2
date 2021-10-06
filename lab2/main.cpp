//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeContainer.h"
#include "Executive.h"


int main(int argc, const char * argv[]) {
    
    if (argc < 2) {
        std::cerr << "incorrect number of parameters" << std::endl;
    } else {
        Executive exec(argv[0]);
    }
    
    return(0);
}


/*Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...*/











