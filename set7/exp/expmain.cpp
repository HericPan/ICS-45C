// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include <fstream>
#include <iostream>

int main()
{
    std::string s1;
    std::fstream infile;
    infile.open("test.txt", std::ios::in);
    // infile << "damn" << std::endl;
    std::cout << infile.is_open() << std::endl;
    // while (!infile.eof())
    // {
    //     std::getline(infile, s1);
    //     std::cout << s1 << std::endl;
    // }
    while (std::getline(infile, s1))
    {
        std::cout << s1 << std::endl;
    }
    infile.close();


    return 0;
}

