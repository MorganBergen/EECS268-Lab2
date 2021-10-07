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
        std::cerr << "incorrect number of parameters\n";
    } else {
        Executive exec(argv[1]);
        exec.run();
    }
    
    return(0);
}












