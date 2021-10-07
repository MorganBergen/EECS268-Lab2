//  Executive.cpp

#include "Executive.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

Executive::Executive(std::string file_name) {
    
    m_file_name = file_name;
    
    in_file.open(m_file_name);
    
    if (in_file.is_open()) {
        
        in_file >> m_file_size;
    }
    
    m_container = new ShapeContainer(m_file_size);
    
}

void Executive::run() {
    
    while (!in_file.eof()) {
        
        in_file >> m_instruction >> m_index;
        
        if (m_instruction == "ADD") {
            
            addToContainer();
            
        } else if (m_instruction == "PRINT") {
            
            print();
            
        } else if (m_instruction == "DELETE") {
            
            std::cout << m_instruction << std::endl;
            
        } else if (m_instruction == "EXIT") {
            
            in_file.close();
            
            std::cout << "Exiting..." << std::endl;
            
            return;
            
        } else {
            
            std::cout << "invalid option" << std::endl;
            
            return;
        }
    }
    in_file.close();
}


void Executive::addToContainer(){
    
    in_file >> m_name_of_object;
    
    if (m_name_of_object == "CIR") {
        
        in_file >> m_radius;
        
        Circle* tempCir = new Circle;
        
        tempCir -> setRadius(m_radius);
        
        try {
            
            m_container -> add(tempCir, m_index);
            
        } catch (std::runtime_error& e) {
            
            std::cout << "Shape at index " << m_index << ": " << e.what() << std::endl;
            
            delete tempCir;
        }
        
    }  else if (m_name_of_object == "TRI") {
        
        in_file >> m_base >> m_height;
        
        Triangle* tempTri = new Triangle;
        
        tempTri -> setBase(m_base);
        tempTri -> setHeight(m_height);
        
        try {
            
            m_container -> add(tempTri, m_index);
            
        } catch (std::runtime_error& e) {
            std::cout << "Shape at index " << m_index << ": " << e.what() << std::endl;
            delete tempTri;
        }
    } else if (m_name_of_object == "REC") {
        
        in_file >> m_width >> m_length;
        
        Rectangle* tempRec = new Rectangle;
        
        tempRec -> setWidth(m_width);
        tempRec -> setlength(m_length);
        
        try {
            
            m_container -> add(tempRec, m_index);
            
        } catch (std::runtime_error& e) {
            std::cout << "Shape at index " << m_index << ": " << e.what() << std::endl;
            delete tempRec;
        }
        
    } else {
        
        std::cout << "INCOMPLETE" << std::endl;
        
    }
}


/*
 PRINT <index>
 Prints the name and area of the shape at a given index, as shown below
 The index may be out of range or not yet set, in which case you must catch and handle the exception to gracefully recover and continue on
 
 Shape at index 0: Circle area = 95.0331
 Shape at index 99: Does not exist
 Shape at index 2: Rectangle area = 212.625
 Exiting...
 
 
 */

void Executive::print() const {
    
    if (m_index < 0 || m_index > m_file_size - 1) {
        try {
            m_container -> shapeName(m_index);
            m_container -> shapeName(m_index);
        } catch (std::runtime_error& e) {
            std::cout << "Shape at index " << m_index << ": " << e.what() << std::endl;
        }
        
    } else {
        
        std::cout << "Shape at index " << m_index << ": " << m_container -> shapeName(m_index) << " area = " << m_container -> area(m_index) << std::endl;
    }
}


void Executive::deleteObject() {
    
    if (m_index < 0 || m_index > m_file_size - 1) {
        try {
            m_container -> remove(m_index);
        } catch (std::runtime_error& e) {
            std::cout << "Shape at index " << m_index << ": " << e.what() << std::endl;
        }
    } else {
        m_container -> remove(m_index);
    }
    
}

Executive::~Executive() {
    
    delete m_container;
    
}
