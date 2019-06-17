//
//  main.cpp
//  PowersOfTwo
//
//  Created by Hans van Riet on 3/25/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>
using namespace std;

// Function Prototypes
long double  raiseToPower(int n, int k);

int main(int argc, const char * argv[])
{
    double limit;
    cout << "This program lists powers of two.\n";
    cout << "Enter exponent limit: ";
    cin >> limit;
    
    for (int i = 0 ; i <= limit ; i++)
    {
        cout << "2 to the " << i << " = " << raiseToPower(2, i) << endl;
    }
    cout << (double) 9 / 4 << endl;

    return 0;
}

// Function implementation
long double  raiseToPower(int n, int k)
{
    long double  result = 1;
    for (int i = 0 ; i < k ; i++){
        result *= n;
    }
    return result;
}

