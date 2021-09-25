#ifndef INPUT_HPP
#define INPUT_HPP
#include <iostream>
#include <limits>
#include "Cutpoints.hpp"


inline void InputCountTo(unsigned int& count)
{
    std::cin >> count;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

inline void InputDataTo(unsigned int& num)
{
    std::cin >> num;
}

inline void InputDataTo(char& c)
{
    std::cin >> c;
}

inline void InputDataTo(double& num)
{
    std::cin >> num;
}

inline void InputNameTo(std::string& name)
{
    // ignore the prior spaces
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), ' ');

    std::getline(std::cin, name);

}

inline void InputCutPointSet(CutPointSet& cutPointSet)
{
    InputDataTo(cutPointSet.A);
    InputDataTo(cutPointSet.B);
    InputDataTo(cutPointSet.C);
    InputDataTo(cutPointSet.D);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}



#endif