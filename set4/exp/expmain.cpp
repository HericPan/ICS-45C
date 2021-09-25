// expmain.cpp
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with the code in the "app" directory or with any additional libraries
// that are part of the project, outside of the context of the main
// application or Google Test.
#include "problem3.cpp"

int main()
{
    LinkedList list;
    list.addNode("Boo");
    list.addNode("Is");
    list.addNode("Perfect");
    list.printOutAllNodes();
    list.transformEach([](const std::string& s) { return s + "!"; });
    list.printOutAllNodes();
    

    return 0;
}
