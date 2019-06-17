//
//  main.cpp
//  distanceConverter
//
//  Created by Hans van Riet on 3/26/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int distanceInMeters, distanceInInches, distanceInFeet, remainingInches;
    const double CONVERSION_FACTOR = 0.0254;
    const int INCH_PER_FOOT = 12;


    // insert code here...
    std::cout << "Enter distance in meters...";
    std::cin >> distanceInMeters;
    distanceInInches = distanceInMeters / CONVERSION_FACTOR;
    distanceInFeet = distanceInInches / INCH_PER_FOOT;
    remainingInches = distanceInInches % (distanceInFeet * INCH_PER_FOOT);
    std::cout << distanceInMeters << " meters equals " << distanceInFeet << " feet and " <<
    remainingInches << " inches.\n";
    
    return 0;
}

