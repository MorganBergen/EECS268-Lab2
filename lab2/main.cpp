//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main(int argc, const char * argv[]) {
    
    double base, height;
    
    Triangle staticTri;
    std::cout << staticTri.area() << std::endl;
    staticTri.setBase(1);
    staticTri.setHeight(1);
    std::cout << staticTri.area() << std::endl;
    std::cout << staticTri.shapeName() << std::endl;
    
    std::cout << "enter base: ";
    std::cin >> base;
    std::cout << "enter height: ";
    std::cin >> height;
    
    Triangle* tempTri = nullptr;
    tempTri = new Triangle(base, height);
    
    std::cout << tempTri -> area() << std::endl;
    tempTri -> setBase(100);
    tempTri -> setHeight(100);
    std::cout << tempTri -> area() << std::endl;
    std::cout << tempTri -> shapeName() << std::endl;
    
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
 
 //testing rectangle class
 double height;
 double width;
 std::cout << "please enter width: ";
 std::cin >> width;
 std::cout << "please enter height: ";
 std::cin >> height;
 Rectangle* tempRec = nullptr;
 tempRec = new Rectangle(height, width);
 std::cout << tempRec -> area() << std::endl;
 std::cout << "please enter new width: ";
 std::cin >> width;
 std::cout << "please enter new height: ";
 std::cin >> height;
 tempRec -> setHeight(height);
 tempRec -> setWidth(width);
 std::cout << tempRec -> area() << std::endl;
 std::cout << tempRec -> shapeName() << std::endl;
 
 
 */
