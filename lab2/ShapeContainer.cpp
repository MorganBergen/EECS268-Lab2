//  ShapeContainer.cpp

#include "ShapeContainer.h"
#include <iostream>

ShapeContainer::ShapeContainer(int size){
    std::cout << "ShapeConatiner constructor has been called\n";
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






void ShapeContainer::add(Shape* shapePtr, int index) const{
    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Cannot add object because index is out of range.");
    } else if (m_array_of_shapes[index] == nullptr) {
        std::cout << shapePtr -> shapeName() << " has been stored in m_array_of_shapes at index " << index << std::endl;
        m_array_of_shapes[index] = shapePtr;
    } else {
        delete m_array_of_shapes[index];
        m_array_of_shapes[index] = shapePtr;
    }
}

//removes object that m_arrayOfShapes points to,
//then assigns index to nullptr,
//or throws a std::runtime_error if the index is invalid or there is no object to delete
void ShapeContainer::remove(int index){
    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Cannot remove object because index is out of range.");
    } else {
        std::cout << m_array_of_shapes[index] -> shapeName() << " is now being set to... ";
        delete m_array_of_shapes[index];
        m_array_of_shapes[index] = nullptr;
        std::cout << m_array_of_shapes[index] << std::endl;
    }
}
