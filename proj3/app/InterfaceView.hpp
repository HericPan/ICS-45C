#ifndef INTERFACEVIEW_HPP
#define INTERFACEVIEW_HPP
#include <string>

class InterfaceView{
public:
    void getStringFromConsoleTo(std::string& target);
    void getLineFromConsoleTo(std::string& target);
    void clearInputLine();
    void printResult(const std::string& result);
    void printResult(const unsigned int& result);
    void printResult(const double& result);

};

#endif