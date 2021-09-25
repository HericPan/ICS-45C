#include <iostream>
#include <limits>
#include "InterfaceView.hpp"

void InterfaceView::getStringFromConsoleTo(std::string& target)
{
    std::cin >> target;
}

void InterfaceView::getLineFromConsoleTo(std::string& target)
{
    std::getline(std::cin, target);
}

void InterfaceView::clearInputLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore until end of the line
}


void InterfaceView::printResult(const std::string& result)
{
    std::cout << result << std::endl;
}

void InterfaceView::printResult(const unsigned int& result)
{
    this->printResult(std::to_string(result));
}

void InterfaceView::printResult(const double& result)
{
    this->printResult(std::to_string(result));
}