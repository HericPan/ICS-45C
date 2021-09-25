// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include <iostream>
#include "input.hpp"
#include "ArrayBuilder.hpp"
#include "Students.hpp"

int main()
{
    
    std::string name;
    InputNameTo(name);
    std::cout << name << std::endl;
    return 0;
}

