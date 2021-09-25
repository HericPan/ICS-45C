// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include <cmath>
#include <iostream>
#include <iomanip>
#define PI 3.14159265

inline double DegreeToRad2(double degree)
{
    return degree*PI/180;
}



int main()
{

    double d1 = 1.23456789;
    std::cout.setf(std::ios::fixed);
    std::cout << std::fixed << std::setprecision(2) << d1;
    std::cout.unsetf(std::ios::fixed);
    std::cout << " " << std::setprecision(6) << d1;
    
    return 0;
}

