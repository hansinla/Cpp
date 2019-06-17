//
//  main.cpp
//  TempConverter
//
//  Created by Hans van Riet on 3/26/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>

double convertCelsius (double);

int main(int argc, const char * argv[])
{
    
    // insert code here...
    double tempInC;
    
    std::cout << "Enter temperature in degrees C...";
    std::cin >> tempInC;
    std::cout << tempInC << " degrees Celsius equals " << convertCelsius(tempInC) << " Fahrenheit\n";
    return 0;
}

double convertCelsius (double temp) {
    return temp * (9.0/5.0) + 32.0;
}
