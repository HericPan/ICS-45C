#include <string>
#include <iostream>
#include "output.hpp"

void outputLati(const Location& l)
{
    std::cout << l.LatiDegree << "/" << l.LatiPole << " ";
}

void outputLong(const Location& l)
{
    std::cout << l.LongDegree << "/" << l.LongPole << " ";
}

void outputLocationName(const Location& l)
{
    std::cout << "(" << l.LocationName << ")";
}

void outputLocation(const Location& l){
    outputLati(l);
    outputLong(l);
    outputLocationName(l);
    if (l.distance > 0)
        // set precision(1) and fixed
        
        std::cout << " (" << l.distance << " miles" << ")";
    std::cout << std::endl;
}