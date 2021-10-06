//  Executive.h

#ifndef Executive_h
#define Executive_h
#include "ShapeContainer.h"
#include <string>
#include <fstream>
#include <stdio.h>

class Executive {
public:
    Executive(std::string file_name);
    ~Executive();
    void run();
    
private:
    std::ifstream in_file;
    int m_file_size;
    int m_index;
    std::string m_file_name;
    ShapeContainer* m_container;
    std::string m_instruction;
    std::string m_name_of_object;
    double m_radius, m_length, m_width, m_height, m_base;
    
    void execAdd();
    void print() const;
    void deleteObject();
};

#endif /* Executive_h */


/*

 Executive(std::string file_name)
 - declares executive object
 - opens file
 - reads in size
 - creates container object
 
 */
