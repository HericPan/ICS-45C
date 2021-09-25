#include <iostream>
#include <vector>
using namespace std;


void readAndConvert(){
    int loopCount;
    std::string stockSymbol;
    std::string Description;

    std::cin >> loopCount;
    std::cin >> stockSymbol;
    std::cin.ignore(1);
    std::getline(std::cin, Description);



    vector<string> comfirmCode(loopCount);
    vector<int> amount(loopCount);

    for(unsigned int i = 0; i < loopCount; i++)
    {
        cin >> comfirmCode[i];
        float price;
        int num;
        cin >> price >> num;
        amount[i] = price*num;
    }

    // printout Information
    // cout << endl;
    cout << stockSymbol << " (";
    cout << Description << ")";
    cout << endl;
    for(unsigned int i = 0; i < loopCount; i++)
    {
        cout << "[" << comfirmCode[i] << "] ";
        cout << amount[i] << endl;
    }
}