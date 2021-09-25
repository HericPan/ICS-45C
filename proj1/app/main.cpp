#include <iostream>
#include <limits>
#include "input.hpp"
#include "output.hpp"
#include "location.hpp"
#include "distance.hpp"

int main()
{
    // Set a starting point as origin
    Location origin;
    origin.isOrigin = true;
    inputLocation(origin);

    // Get Loop Count
    unsigned int loop;
    std::cin >> loop;


    Location closest;
    closest.distance = std::numeric_limits<float>::max();
    Location farthest;

    
    // input for each vector and keep track of the farthest, closest
    for(unsigned int i = 0; i < loop; i++)
    {
        Location current;
        inputLocation(current);
        float currentDist = calculateDistance(origin, current);
        if (currentDist < closest.distance )
        {
            closest = current;
        } else if (currentDist > farthest.distance) {
            farthest = current;
        }
    }
    
    std::cout << "Start Location: ";
    outputLocation(origin);
    std::cout << "Closest Location: ";
    outputLocation(closest);
    std::cout << "Farthest Location: ";
    outputLocation(farthest);
    

    return 0;
}

