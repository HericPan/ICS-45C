#include <iostream>

class X
{

private:
    int a;
    static int b;
public:
    static void itIsStatic(X& x)
    {
        std::cout << x.a << std::endl;
    }
    void itIsNotStatic()
    {
        std::cout << b << std::endl;
    }
};

int X::b = 1000;

int main()
{
    X x;
    X::itIsStatic(x);
    x.itIsNotStatic();

    return 0;
}

