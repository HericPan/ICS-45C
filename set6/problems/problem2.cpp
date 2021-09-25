#include <iostream>
#include "problem2.hpp"

std::map<std::string, unsigned int> countWordFrequencies(
    const std::vector<std::string>& words)
{
    std::map<std::string, unsigned int> countMap;
    for (std::vector<std::string>::const_iterator i = words.begin();
        i < words.end(); i++)
    {
        countMap[*i]++;
    }
    return countMap;
}


std::string formatWordFrequencies(
    const std::map<std::string, unsigned int>& frequencies)
{
    std::string total;
    // find longest key(string) and value(int)
    unsigned int maxStringLength = 0;
    unsigned int maxIntLength = 0;
    for (auto i : frequencies)
    {
        if (i.first.length() > maxStringLength) {
            maxStringLength = i.first.length();
        }

        if (std::to_string(i.second).length() > maxIntLength){
            maxIntLength = std::to_string(i.second).length();
        }
    }

    for (auto i = frequencies.begin(); i != frequencies.end(); i++)
    {
        unsigned int spaceCount = 2 + maxStringLength - i->first.length()
                                    + maxIntLength - std::to_string(i->second).length();
        total += i->first;
        for (unsigned int j = 0; j < spaceCount; j++)
            total += " ";
        total += std::to_string(i->second);
        total += "\n";
    }
    return total;
}