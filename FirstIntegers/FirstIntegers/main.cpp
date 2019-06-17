//
//  main.cpp
//  FirstIntegers
//
//  Created by Hans van Riet on 3/26/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int numInts, counter = 1, sum = 0;
    
    std::cout << "Enter number of odd Integers... ";
    std::cin >> numInts;
    while (numInts > 0) {
        if (counter % 2 != 0) {
            std::cout << counter << std::endl;
            sum += counter;
            numInts -= 1;
        }
        counter++;
        
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

