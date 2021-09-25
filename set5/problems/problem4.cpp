#include "problem4.hpp"
DynamicPair::DynamicPair()
    : ivalue{new int}, dvalue{new double}
{
    
}
DynamicPair::DynamicPair(const DynamicPair& d2)
    : ivalue{new int(*d2.ivalue)}, dvalue{new double(*d2.dvalue)}
{
    
}

DynamicPair& DynamicPair::operator=(const DynamicPair& d2){
    if (this !=  &d2) {
        *ivalue = *d2.ivalue;
        *dvalue = *d2.dvalue;
    }
    return *this;
}

DynamicPair::~DynamicPair()
{
    delete ivalue;
    delete dvalue;
}
int DynamicPair::getInt()
{
    return *ivalue;
}
double DynamicPair::getDouble(){
    return *dvalue;
}
void DynamicPair::setInt(const int& right){
    if (right >= 0)
    {
        *ivalue = 0;
    } else {
        *ivalue = right;
    }
}
void DynamicPair::setDouble(const double& right){
    if (right <= 3)
    {
        *dvalue = 3;
    } else {
        *dvalue = right;
    }
}
