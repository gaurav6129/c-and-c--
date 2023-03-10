#include <iostream>
using namespace std;
int main()
{
    int input,n, rem, rev = 0;
    cout << "input the number by user" << endl;
    cin >> input;
    
    while (input != 0)
    {
        rem = input % 10;//321
        rev = rev * 10 + rem;//321
        input = input/ 10;//12,1
    }
    cout<<"reverse number"<<rev;
    
    if (input==rev)
        cout << "palindrom number ";
    else
        cout << "not palindrom number"n;
    
}