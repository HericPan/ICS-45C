#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <string>
#include "InterfaceView.hpp"
#include "HashMap.hpp"


class Controller{
public:
    // Controller constructor (no default, pass in the model and View)
    Controller(HashMap& model, const InterfaceView& view);

    // Controller cannot be copied or assigned
    Controller(const Controller& c) = delete;
    Controller& operator=(const Controller&) = delete;

    // the main while loop for getting command and returning results
    void mainLoop();

    // get the first string of the current command line
    inline std::string fetchCommandHead()
    {
        std::string commandHead;
        view.getStringFromConsoleTo(commandHead);
        return commandHead;
    }

    inline std::string fetchParameter()
    {
        return this->fetchCommandHead();
    }

    inline std::string getWholeLine(){
        std::string wholeLine;
        view.getLineFromConsoleTo(wholeLine);
        return wholeLine;
    }
    

    

private:
    bool debugFlag; // the Flag for debug mode, off/false by default
    HashMap& model;
    InterfaceView view;
    
};

#endif