//
//  main.cpp
//  Hailstone
//
//  Created by Hans van Riet on 3/26/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{

    // insert code here...
    int start, newNumber;
    
    std::cout << "Enter startnumber for hailstone sequence: ";
    std::cin >> start;
    while (start != 1){
        if (start % 2 != 0){
            // number is odd
            newNumber = start * 3 + 1;
            std::cout << start << " is odd, so I multiply by three and add one to get " << newNumber << std::endl;
            start = newNumber;
        } else {
            // number is even
            newNumber = start / 2;
            std::cout << start << " is even, so I divide by two to get " << newNumber << std::endl;
            start = newNumber;
        }
    }
    return 0;
}

