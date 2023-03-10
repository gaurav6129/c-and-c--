#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "gaurav rai is a good boy";
    cout << "intilize code  ";
    cout << str << endl;
    str.resize(10);
    cout << "resize string  ";
    cout << str << endl;
    cout << "string ki capacity  ";
    cout << str.capacity() << endl;
    cout << "string ki lenght  ";
    cout << str.length() << endl;
    str.shrink_to_fit();
    cout << "string ki capacity decreses  ";
    cout << str.capacity() << endl;
    
    return 0;
}