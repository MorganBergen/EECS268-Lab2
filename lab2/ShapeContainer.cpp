//  ShapeContainer.cpp

#include "ShapeContainer.h"
#include <iostream>
#include <string>

ShapeContainer::ShapeContainer(int size){
    
    std::cout << "ShapeConatiner constructor has been called\n";
    m_size = size;
    m_array_of_shapes = new Shape*[m_size];
    for (int i = 0; i < m_size; i++) {
        m_array_of_shapes[i] = nullptr;
    }
}

ShapeContainer::~ShapeContainer(){
    
    std::cout << "ShapeContainer destructor has been called\n" << std::endl;
    for (int i = 0; i < m_size; i++) {
        if (m_array_of_shapes[i] != nullptr) {
            delete m_array_of_shapes[i];
        } else {
            
        }
    }
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
        throw std::runtime_error("Cannot return shape name object because index is invalid or out of range.");
    } else if (m_array_of_shapes[index] == nullptr) {
        throw std::runtime_error("Cannot return shape name object because index has been set to nullptr.");
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

void ShapeContainer::remove(int index){
    
    if (index < 0 || index > m_size - 1) {
        throw std::runtime_error("Cannot remove object because index is out of range.");
    } else if (m_array_of_shapes[index] == nullptr) {
        throw std::runtime_error("Cannot remove object because there is no object to delete.");
    } else {
        std::cout << m_array_of_shapes[index] -> shapeName() << " is now being removed to be.... ";
        delete m_array_of_shapes[index];
        m_array_of_shapes[index] = nullptr;
        std::cout << m_array_of_shapes[index] << std::endl;
    }
}
