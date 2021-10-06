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
        std::cout << m_file_size << std::endl;
    }

    m_container = new ShapeContainer(m_file_size);
    
    //in_file.close();
}

Executive::~Executive() {
    delete m_container;
}


