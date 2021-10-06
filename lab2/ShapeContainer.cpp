//  ShapeContainer.cpp

#include "ShapeContainer.h"
#include <iostream>

ShapeContainer::ShapeContainer(int size){
    std::cout << "constructor has been called\n";
    m_size = size;
    m_array_of_shapes = new Shape*[m_size];
    for (int i = 0; i < m_size; i++) {
        m_array_of_shapes[i] = nullptr;
    }
}

ShapeContainer::~ShapeContainer(){
    for (int i = 0; i < m_size; i++) {
        if (m_array_of_shapes[i] != nullptr) {
            delete m_array_of_shapes[i];
        } else {
            
        }
    }
}


