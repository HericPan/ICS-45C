#include <iostream>
#include "HashMap.hpp"
#include "InterfaceView.hpp"
#include "Controller.hpp"

int main()
{
    HashMap hm;
    InterfaceView console;
    Controller controller(hm, console);

    controller.mainLoop();


    return 0;
}

