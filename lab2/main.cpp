//  main.cpp

#include <iostream2Fdr8dy9fiXbcY9K>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(int argc, const char * argv[]) {
    
    double radius;
    
    std::cout << "please enter radius: ";
    std::cin >> radius;
    
    Circle* tempCir = nullptr;
    
    tempCir = new Circle();
    tempCir -> setRadius(radius);
    tempCir -> shapeName();
    tempCir -> area();
    
    std::cout << "cirlce name: " << tempCir -> shapeName() << std::endl;
    std::cout << "circle area: " << tempCir -> area() << std::endl;
    
    
    return 0;
}

