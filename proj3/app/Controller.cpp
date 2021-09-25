#include <iostream>
#include <sstream>
#include "Controller.hpp"

Controller::Controller(HashMap& model, const InterfaceView& view)
    : debugFlag{false}, model{model}, view{view}
{
    
}

void Controller::mainLoop()
{
    while (true)
    {
        std::string wholeCommandLine = this->getWholeLine();
        std::istringstream commandStream(wholeCommandLine);
        std::string command;
        std::string param1;
        std::string param2;
        std::string param3;
        commandStream >> command >> param1 >> param2 >> param3;
        // A. USER-FACING
        // 1. QUIT
        if (command == "QUIT") // if QUIT
        {
            
            view.printResult("GOODBYE");
            break; // quit the main loop
        }
        // 2. CLEAR
        else if (command == "CLEAR")
        {
            
            HashMap newHm; // create a new 
            this->model = newHm; // copy into the old one to delete
            view.printResult("CLEARED");
        } 
        // 3. REMOVE
        else if (command == "REMOVE")
        {
            bool removable;
            std::string key = param1;
            

            // model execution
            removable = model.remove(key);
            // check removed or not
            if (removable) // contains key and removed
            {
                view.printResult("REMOVED");
            } else {
                // does not contains key and cannot be remmoved
                view.printResult("NONEXISTENT");
            }
        }
        // 4. CREATE
        else if (command == "CREATE")
        {
            std::string key = param1;
            std::string value = param2;

            if (param1 == "" || param2 == "")
            {
                view.printResult("INVALID");
            } else {
            

                // check contains(key)
                if (model.contains(key)) {
                    view.printResult("EXISTS");
                } else {
                    model.add(key, value);
                    view.printResult("CREATED");
                }
            }
        }
        // 5. LOGIN key/value and LOGIN COUNT
        else if (command == "LOGIN")
        {
            // get the second string to know whether it's former or latter
            std::string key = param1;
            if (key == "COUNT") {
                // LOGIN COUNT
                // check debug flag
                

                if (this->debugFlag)
                {
                    // debug on
                    
                    view.printResult(model.size());
                } else {
                    // debug off
                    view.printResult("INVALID");
                }
            }
            else {
                // LOGIN KEY VALUE
                std::string value = param2;

                if (key == "" || value == "")
                {
                    view.printResult("INVALID");
                    continue;
                }
                
                
                // check both the key(username) and value(password)
                if (model.contains(key) && model.value(key) == value)
                {
                    // if key exists and password is the same
                    view.printResult("SUCCEEDED");
                } else {
                    view.printResult("FAILED");
                }
            }
        }
        // 6. DEBUG (ON/OFF)
        else if (command == "DEBUG")
        {
            // Know ON or OFF
            std::string debugSwitch = param1;
            if (debugSwitch == "ON")
            {
                if (debugFlag)
                {
                    view.printResult("ON ALREADY");
                } else {
                    this->debugFlag = true;
                    view.printResult("ON NOW");
                }

            } else if (debugSwitch == "OFF")
            {
                if (debugFlag)
                {
                    this->debugFlag = false;
                    view.printResult("OFF NOW");
                } else {
                    view.printResult("OFF ALREADY");
                }
            } else {
                view.printResult("INVALID");
            }
        }
        // 7. BUCKET COUNT
        else if (command == "BUCKET")
        {
            std::string countString = param1; // this string must be COUNT, or print INVALID
            

            if (countString != "COUNT")
            {
                view.printResult("INVALID");
            } else {
                view.printResult(model.bucketCount());
            }
        }
        // 8. LOAD FACTOR
        else if (command == "LOAD")
        {
            std::string countString = param1; 
            

            if (countString != "FACTOR")
            {
                view.printResult("INVALID");
            } else {
                view.printResult(model.loadFactor());
            }
        }
        // 9. LOAD FACTOR
        else if (command == "MAX")
        {
            std::string str1 = param1; 
            std::string str2 = param2; 
            

            if (str1 != "BUCKET" || str2 != "SIZE")
            {
                view.printResult("INVALID");
            } else {
                view.printResult(model.maxBucketSize());
            }
        } else { // None of above
            
            view.printResult("INVALID");
        }
    }
}