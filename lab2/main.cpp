//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main(int argc, const char * argv[]) {
    
    double radius;
    double length;
    double width;
    double base;
    double height;
    
    
    //an array of shape pointers, each pointer will point to a cir, rec, or tri object
    
    Shape** array_of_shapes = nullptr;
    array_of_shapes = new Shape*[3];
    
    for (int i = 0; i < 3; i++) {
        array_of_shapes[i] = nullptr;
    }
    
    std::cout << "enter radius: ";
    std::cin >> radius;
    array_of_shapes[0] = new Circle(radius);
    
    std::cout << "enter width: ";
    std::cin >> width;
    std::cout << "enter length: ";
    std::cin >> length;
    array_of_shapes[1] = new Rectangle(width, length);
    
    std::cout << "enter base: ";
    std::cin >> base;
    std::cout << "enter height: ";
    std::cin >> height;
    array_of_shapes[2] = new Triangle(base, height);
    
    for (int i = 0; i < 3; i++) {
        std::cout << array_of_shapes[i] -> shapeName() << std::endl;
        std::cout << array_of_shapes[i] -> area() << std::endl;
    }
    
    
    
    return 0;
}






















/*
 Shape** arrayOfShapes = nullptr;
 
 arrayOfShapes = new Shape*[3];
 
 for (int i = 0; i < 3; i++) {
 arrayOfShapes[i] = nullptr;
 }
 
 arrayOfShapes[0] = new Circle(10);
 
 arrayOfShapes[1] = new Rectangle(10, 20);
 
 arrayOfShapes[2] = new Triangle(10, 20);
 
 for (int i = 0; i < 3; i++) {
 std::cout << arrayOfShapes[i] -> shapeName() << ":  ";
 std::cout << arrayOfShapes[i] -> area() << std::endl;
 }
 */
