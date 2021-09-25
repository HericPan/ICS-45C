// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include "ArrayList.hpp"
#include <iostream>
using namespace std;

int main()
{

    ArrayList a1;
    a1.add("first");
    ArrayList a2;
    a2 = a1;
    cout << a2.at(0) << endl;
    return 0;
}

