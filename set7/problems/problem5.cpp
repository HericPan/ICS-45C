
#include "problem5.hpp"
#include <iostream>


namespace
{
    const unsigned int initialCapacity = 10;


        void arrayCopy(std::string* target, std::string* source, unsigned int size)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            target[i] = source[i];
        }
    }

    
}


ArrayList::ArrayList()
    : items{nullptr}, sz{0}, cap{initialCapacity}
{
    try
    {
        items = new std::string[initialCapacity];
    }
    catch(...)
    {
        delete[] items;
        throw;
    }
    
}


ArrayList::ArrayList(const ArrayList& a)
    : items{nullptr}, sz{a.sz}, cap{a.cap}
{
    try
    {
        items = new std::string[a.cap];
    }
    catch(...)
    {
        delete[] items;
        throw;
    }
    arrayCopy(items, a.items, sz);
    
    
}



ArrayList::~ArrayList()
{
    delete[] items;
}



ArrayList& ArrayList::operator=(const ArrayList& a)
{

    if (this != &a)
    {
        std::string* newItems = nullptr;

        try
        {
            items = new std::string[a.cap];
        }
        catch(...)
        {
            delete[] items;
            throw;
        }

        arrayCopy(newItems, a.items, a.sz);

        sz = a.sz;
        cap = a.cap;

        delete[] items;
        items = newItems;
    }

    return *this;
}




std::string& ArrayList::at(unsigned int index)
{
    if (index >= this->sz || index < 0)
    {
        throw std::out_of_range("Out of range: index is " + std::to_string(index) + ", " + "and size is " + std::to_string(sz));
    }
    return items[index];
}


const std::string& ArrayList::at(unsigned int index) const
{
    if (index >= this->sz || index < 0)
    {
        throw std::out_of_range("Out of range: index is " + std::to_string(index) + ", " + "and size is " + std::to_string(sz));
    }
    return items[index];
}



void ArrayList::add(const std::string& s)
{
    if (sz == cap)
    {
        
        int newCap = cap * 2 + 1;

        std::string* newItems = new std::string[newCap];
        arrayCopy(newItems, items, sz);

        cap = newCap;

        delete[] items;
        items = newItems;
    }

    items[sz] = s;
    sz++;
}



unsigned int ArrayList::size() const
{

    return sz;
}


unsigned int ArrayList::capacity() const
{
    return cap;
}

