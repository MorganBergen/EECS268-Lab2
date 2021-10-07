//  ShapeContainer.cpp

#include "ShapeContainer.h"
#include <iostream>
#include <string>

ShapeContainer::ShapeContainer(int size){
    
    m_size = size;
    
    m_array_of_shapes = new Shape*[m_size];
    for (int i = 0; i < m_size; i++) {
        m_array_of_shapes[i] = nullptr;
    }
}

//ORIGINAL DESTRUCTOR
//ShapeContainer::~ShapeContainer(){
//
//    for (int i = 0; i < m_size; i++) {
//        if (m_array_of_shapes[i] != nullptr) {
//            delete m_array_of_shapes[i];
//        } else {
//
//        }
//    }
//}

//REVISED DESTRUCTOR DONE AT 2021.10.07 AT 11:32AM
ShapeContainer::~ShapeContainer() {
    for (int i = 0; i < m_size; i++) {
        delete m_array_of_shapes[i];
    }
    delete [] m_array_of_shapes;
}

double ShapeContainer::area(int index) const {
    
    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Cannot return area object because index is invalid or out of range.");
    } else if (m_array_of_shapes[index] == nullptr) {
        throw std::runtime_error("Cannot return area object because index has been set to nullptr");
    } else {
        return(m_array_of_shapes[index] -> area());
    }
}

std::string ShapeContainer::shapeName(int index) const {
    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Does not exist");
    } else if (m_array_of_shapes[index] == nullptr) {
        throw std::runtime_error("Does not exist");
    } else {
        return(m_array_of_shapes[index] -> shapeName());
    }
}

void ShapeContainer::add(Shape* shape_ptr, int index) {
    
    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Cannot add object because index is out of range.");
    } else if (m_array_of_shapes[index] == nullptr) {
        m_array_of_shapes[index] = shape_ptr;
    } else {
        delete m_array_of_shapes[index];
        m_array_of_shapes[index] = shape_ptr;
    }
}

//ORIGINAL REMOVE METHOD
//void ShapeContainer::remove(int index){
//
//    if (index < 0 || index > m_size - 1) {
//        throw std::runtime_error("Cannot be deleted object because index is out of range.");
//    } else if (m_array_of_shapes[index] == nullptr) {
//        throw std::runtime_error("Cannot be deleted because there is no object to delete.");
//    } else {
//        delete m_array_of_shapes[index];
//        m_array_of_shapes[index] = nullptr;
//
//    }
//}

//REVISED METHOD DONE AT 2021.10.07 AT 11:35AM
void ShapeContainer::remove(int index){
    
    if (index > m_size || m_array_of_shapes[index] == nullptr) {
        throw (std::runtime_error("Cannot be deleted because the object does not exit."));
    } else {
        (delete m_array_of_shapes[index]);
    }
    
}
