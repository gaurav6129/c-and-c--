#include <iostream>
using namespace std;
int main()
{
    int rev = 0, rem, num;
    cout << "type any number" << endl;
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << "reverse number is" << rev;
    return 0;
}