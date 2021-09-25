#include <iostream>
#include "x.hpp"

// namespace {
//     std::string foo2(X::Node* head) 
//     {
//         return head->value;
//     }
// }

X::X()
{
    this->x = 100;
}

int X::getxnum()
{
    return this->x;
}

Y::Y()
    : X()
{
    
}

int Y::getxnum()
{
    this->x = 1000;
    return this->x;
}