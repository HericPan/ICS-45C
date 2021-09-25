// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include <iostream>
#include "problem1.cpp"
int main()
{
    int array[6]{2,4,1,9,7,10};
    for (auto i : array){
        std::cout << i << " ";
    }

    std::cout << std::endl << "After reverse(): " << std::endl;
    int *first = array;
    int *last = array+5;
    // std::cout << (*first) << " " << (*last) << std::endl;
    reverse(first, last);
    for (auto i : array){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

