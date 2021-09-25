// #ifndef COMMANDS_HPP
// #define COMMANDS_HPP

// #include <functional>
// #include "HashMap.hpp"

// class Command
// {
// public:
//     // All Derivative's Command Initialization Constructor
//     Command(const std::function<std::string(HashMap)>& behavior);
    
//     virtual std::function<std::string(HashMap)> getBehavior() = 0;
// private:
//     std::function<std::string(HashMap)> behavior;
// };

// class Singular : public Command // Category for QUIT and CLEAR
// {
    
// };

// class OneParamCommmand : public Command // Category for REMOVE
// {
// public:
//     OneParamCommmand(const std::function<std::string(HashMap)>& behavior, const std::string& arg1);
// protected:
//     std::string param1;
// };


// class TwoParamCommand : public Command // Category for CREATE and LOGIN
// {
// public:
//     TwoParamCommand(const std::function<std::string(HashMap)>& behavior, const std::string& arg1, const std::string& arg2);
// protected:
//     std::string param1;
//     std::string param2;
// };

// #endif