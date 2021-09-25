// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include "problem4.hpp"
#include <iostream>
using namespace std;

int main()
{
    DynamicPair d1;
    d1.setInt(1);
    d1.setDouble(2.2f);
    cout << d1.getInt() << " " << d1.getDouble() << endl;
    DynamicPair d2 = d1;
    d2.setDouble(1000);
    cout << d2.getInt() << " " << d2.getDouble() << endl;
    DynamicPair d3;
    d3 = d1;
    d3.setInt(-100);
    d3.setDouble(100);
    cout << d3.getInt() << " " << d3.getDouble() << endl;
    cout << d1.getInt() << " " << d1.getDouble() << endl;


    return 0;
}

