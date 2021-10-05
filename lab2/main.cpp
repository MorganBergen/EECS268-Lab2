//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main(int argc, const char * argv[]) {

    //of type circle
    Circle* blue = nullptr;
    blue = new Circle(10);
    std::cout << blue -> area() << std::endl;
    
    //of type shape
    Shape* shape1 = nullptr;
    shape1 = new Circle(10);
    std::cout << shape1 -> area() << std::endl;
    std::cout << shape1 -> shapeName() << std::endl;
    
    Shape* shape2 = nullptr;
    shape2 = new Rectangle(10, 20);
    std::cout << shape2 -> area() << std::endl;
    std::cout << shape2 -> shapeName() << std::endl;
    
    Shape* shape3 = nullptr;
    shape3 = new Triangle(10, 20);
    std::cout << shape3 -> area() << std::endl;
    std::cout << shape3 -> shapeName() << std::endl;
    
  
    
    return 0;
}


/*
 
 Shape* array = nullptr;
 array = new Circle[3];
 
 for (int i = 0; i < 3; i++) {
     array[i] = *new Circle(i);
 }
 
 for (int i = 0; i < 3; i++) {
     std::cout << array[1].area() << std::endl;
 }
 

 
 */
