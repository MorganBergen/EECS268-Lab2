//  main.cpp

#include <iostream>
#include "Executive.h"


int main(int argc, const char * argv[]) {
    
    if (argc < 2) {
        std::cerr << "incorrect number of parameters\n";
    } else {
        Executive exec(argv[1]);
        exec.run();
    }
    
    return(0);
}












