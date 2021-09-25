#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string src("Avatar 123 fsfjl \n");
    istringstream istrStream(src); //建立src到istrStream的联系
    string s1, s2, s3, s4, s5;
    istrStream >> s1 >> s2 >> s3 >> s4 >> s5; //把src的内容当做输入流进行读取
    ostringstream ostrStream;
    ostrStream << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 <<endl;
    cout << ostrStream.str();
    cout << to_string(s4 == "") << endl;
    cout << to_string(s4 == " ") << endl;
    cout << to_string(s5 == "\n") << endl;
    cout << to_string(s5 == "") << endl;
    return 0;
}