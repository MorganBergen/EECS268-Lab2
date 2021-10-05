//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main(int argc, const char * argv[]) {
    
    std::cout << "\nPLEASE NOTE THAT THE INCLUDED HEADER FILES WILL NOT PERMANENTLY STAY WITHIN MAIN, INSTEAD THEY WILL BE INCLUDED IN THE EXECUTIVE CLASS WHERE FILE I/O WILL TAKE PLACE" << std::endl;
    
    //an array of shape pointers
    Shape** arrayOfShapes = nullptr;
    
    std::cout << "\n\narrayOfShapes is pointing to " << arrayOfShapes << std::endl;
    
    arrayOfShapes = new Shape*[3];
    std::cout << "\narrayOfShapes:\n" << "- a pointer to an array of shape pointers\n- or understood to be an array of shape pointers" << std::endl;
    
    for (int i = 0; i < 3; i++) {
        arrayOfShapes[i] = nullptr;
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "*Shape at index " << i << " is pointing to " << arrayOfShapes[i] << std::endl;
    }
    std::cout << "\n" << std::endl;
    std::cout << "Assigning & Initializing *Shape pointers now..." << std::endl;
    arrayOfShapes[0] = new Circle(10);
    
    arrayOfShapes[1] = new Rectangle(10, 20);
    
    arrayOfShapes[2] = new Triangle(10, 20);
    
    std::cout << "\n\narrayOfShapes -> arrayOfShapes[size] = { *Shape, *Shape, *Shape }\n" << std::endl;
    
    for (int i = 0; i < 3; i++) {
        std::cout << "arrayOfShapes[" << i << "] -> ";
        std::cout << arrayOfShapes[i] -> shapeName() << " area of ";
        std::cout << arrayOfShapes[i] -> area() << std::endl;
    }
    
    return 0;
}


/*
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
 
 
 
 */
