#include <iostream>
#include "input.hpp"

void inputLati(Location& l)
{
    std::cin >> l.LatiDegree;
    // ignore a slash
    std::cin.ignore(1);
    std::cin >> l.LatiPole;
    // ignore a space
    std::cin.ignore(1);
}   

void inputLong(Location& l)
{
    std::cin >> l.LongDegree;
    // ignore a slash
    std::cin.ignore(1);
    std::cin >> l.LongPole;
    // ignore a space
    std::cin.ignore(1);
}   

void inputLocationName(Location& l)
{
    std::getline(std::cin, l.LocationName);
}

void inputLocation(Location& l)
{
    inputLati(l);
    inputLong(l);
    inputLocationName(l);
}