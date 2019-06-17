//
//  main.cpp
//  Combinations
//
//  Created by Hans van Riet on 3/27/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>

unsigned long int factorial(unsigned long int x);


unsigned long int factorial(unsigned long int x)
{
    return (x <= 1 ? 1 : x * factorial(x-1));
}


int main(int argc, const char * argv[])
{

    // insert code here...
    unsigned long int n, k, combinations;
    
    std::cout << "Enter the number of objects (n): ";
    std::cin >> n;
    std::cout << "Enter the number of to be choosen (k): ";
    std::cin >> k;
    
    std::cout << "factorial(n): " << factorial(n) << std::endl;
    std::cout << "factorial(k): " << factorial(k) << std::endl;
    
    
    combinations = factorial(n) / (factorial (k) * factorial (n-k));
    
    std::cout << "C(n, k): " << combinations << std::endl;
    
    return 0;
}


