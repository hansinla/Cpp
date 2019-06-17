//
//  main.cpp
//  Quadratic
//
//  This program finds roots of the quadratic formula ax^2 + bx + c = 0
//
//  Created by Hans van Riet on 4/5/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

/* Function Prototypes */
void getCoefficients (double &a, double &b, double &c);
void solveQuadratic(double a, double b, double c, double &x1, double &x2);
void printRoots (double x1, double x2);
void error(std::string msg);

int main(int argc, const char * argv[])
{
    double a, b, c, r1, r2;
    getCoefficients(a, b, c);
    solveQuadratic(a, b, c, r1, r2);
    printRoots(r1, r2);
    return 0;
}

void getCoefficients (double &a, double &b, double &c) {
    std::cout << "Enter coefficients for the quadratic equation:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
}

void solveQuadratic(double a, double b, double c, double &x1, double &x2) {
    if  (a == 0) error("The coefficient must be non zero.");
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) error("This equation has no real roots.");
    double sqrtDiscriminant = sqrt(discriminant);
    x1 = (-b + sqrtDiscriminant) / ( 2 * a );
    x2 = (-b - sqrtDiscriminant) / ( 2 * a );
}

void printRoots (double x1, double x2) {
    if (x1 == x2) {
        std::cout << "There's a double root at: " << x1 << std::endl;
    } else {
        std::cout << "The roots are: " << x1 << " and " << x2 << std::endl;
    }
    
}

void (error(std::string msg) ) {
    std::cerr << msg << std::endl;
    exit (EXIT_FAILURE);
}
