#ifndef X_HPP
#define X_HPP
#include <iostream>
#include <string>

class X
{
public:
    X();
    virtual int getxnum();
protected:
    int x;
};

class Y : public X
{
public:
    Y();
    int getxnum() override;
};



#endif