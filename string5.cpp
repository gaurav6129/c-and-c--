#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "input any character-->";
    getline(cin, str);
    cout << "print input character-->" << str << endl;
    str.push_back('j');
    cout << "push character in input-->" << str << endl;
    str.pop_back();
    cout << "pop character in output-->" << str << endl;
    str.resize(10);
    cout << "resize output character-->" << str << endl;
    cout << "capacity-->" << str.capacity() << endl;
    cout << "lenght string ki-->" << str.length() << endl;
    cout << "string size srink-->" << endl;
    str.shrink_to_fit();
    cout<<"size shrink"<<str.capacity();
    return 0;
}
