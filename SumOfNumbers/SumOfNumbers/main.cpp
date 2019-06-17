//
//  main.cpp
//  SumOfNumbers
//
//  Created by Hans van Riet on 3/26/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int sum = 0;
    
    std::cout << "Computing the sum of the numbers between 1 and 100.\n";
    
    for (int i = 1; i < 101; i++) {
        sum += i;
    }
    std::cout << "Answer: "  << sum << std::endl;
    
    return 0;
}

