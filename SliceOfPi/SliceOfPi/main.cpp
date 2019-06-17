//
//  main.cpp
//  SliceOfPi
//
//  Created by Hans van Riet on 3/26/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>
#include <iomanip> // setprecision
#include <cmath>  // sqrt
using namespace std;

int main(int argc, const char * argv[])
{
 int iterations = 100000000;
    
    cout << "Approximation of π with " << iterations << " Leibniz terms: ";
    
    int fraction = 3;
    long double quarterPi = 1;
    
    for (int i = 1; i <= iterations ; i++){
        (i % 2 == 0) ? quarterPi += (double) 1/fraction : quarterPi -= (double) 1.0/fraction ;
        fraction += 2;
    }
    
    cout  << setprecision(10) << 4 * quarterPi << endl << endl;
    
    //****************************************************/
    
    cout << "Approximation of π by approximating area bounded by circular arc: ";
    
    long double radius = 2.0, width, height, area = 0, x;
    int segments = 100000000;
    width = radius / segments;
    x = width / 2;
    
    for (int i = 0 ; i < segments ; i++) {
        height = sqrt ((radius * radius) - (x * x));
        area += (height * width);
        x += width;
    }
    
    cout  << area << endl << endl;
    
    //****************************************************/
    
    cout << "Standard M_PI definition of π: ";
    cout << M_PI << endl << endl;
    
    return 0;
}

