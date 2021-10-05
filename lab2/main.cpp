//  main.cpp

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


int main(int argc, const char * argv[]) {
    
    int size = 3;
    
    //class ShapeContainer { ... private:
    Shape** array_of_shapes = nullptr;
    int m_size;
    
    //ShapeContainer::ShapeContainer(int size) {
    m_size = size;
    
    array_of_shapes = new Shape*[m_size];
    
    for (int i = 0; i < m_size; i++) {
        array_of_shapes[i] = nullptr;
        std::cout << array_of_shapes[i] << std::endl;
    
    }
    //}
    
    // void Executive::add {

    int radius = 1;
    int width = 2;
    int length = 2;
    int base = 2;
    int height = 2;
    
    Circle* tempCir = new Circle;
    tempCir -> setRadius(radius);
    
    Rectangle* tempRec = new Rectangle;
    tempRec -> setWidth(width);
    

    
    //}

    
    
    
    
    
    //ShapeContainer::~ShapeContainer(){
    for (int i = 0; i < m_size; i++) {
        if (!(array_of_shapes == nullptr)) {
            std::cout << "deleting " << array_of_shapes[i] << " ...... ";
            delete array_of_shapes[i];
            std::cout << "now deleted to " << array_of_shapes[i] << std::endl;
        } else {
            std::cout << array_of_shapes[i] << "is already set to nullptr" << std::endl;
        }
    }
    //}
    
    
    return 0;
}


/*Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...*/

/*5
 ADD 0 CIR 5.5
 ADD 1 TRI 2.5 6.6
 PRINT 0
 ADD 2 REC 10.5 20.25
 PRINT 99
 PRINT 2
 EXIT*/












