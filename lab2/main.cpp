//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(int argc, const char * argv[]) {
    
    
    //testing rectangle class
    double height;
    double width;
    std::cout << "please enter width: ";
    std::cin >> width;
    std::cout << "please enter height: ";
    std::cin >> height;
    
    Rectangle* tempRec = nullptr;
    
    tempRec = new Rectangle(height, width);
    
    
    
    return 0;
}

/*
 //testing circle class
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
 */
