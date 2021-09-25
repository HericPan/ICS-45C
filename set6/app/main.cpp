#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "problem2.hpp"

int main()
{
    std::vector<std::string> v;
    // build a string vector from given by Thronton
    // QUICK 20
    for (unsigned int i = 0; i < 20; i++) 
        v.push_back("QUICK");
    // PERFECT 9
    for (unsigned int i = 0; i < 9; i++) 
        v.push_back("PERFECT");
    // HELLO 36
    for (unsigned int i = 0; i < 36; i++) 
        v.push_back("HELLO");
    // PERFECTLY 14
    for (unsigned int i = 0; i < 14; i++) 
        v.push_back("PERFECTLY");
    // BOO 117
    for (unsigned int i = 0; i < 117; i++) 
        v.push_back("BOO");
    
    auto freq = countWordFrequencies(v);
    std::cout << formatWordFrequencies(freq) << std::endl;

    return 0;
}

