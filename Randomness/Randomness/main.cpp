//
//  main.cpp
//  Randomness
//
//  Created by Hans van Riet on 3/28/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>

int main(int argc, const char * argv[])
{
    for (int i = 0; i < 10; i++) {
        std::cout << std::setw(10) << rand() << std::endl;
    }
    
    return 0;
}

