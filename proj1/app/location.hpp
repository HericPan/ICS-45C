#ifndef LOCATION_HPP
#define LOCATION_HPP
#include <string>

struct Location
{
    bool isOrigin = false; // is the beginning point or not?
    
    float LatiDegree;
    char LatiPole;
    float LongDegree;
    char LongPole;
    std::string LocationName;

    float distance = -1;
};

#endif