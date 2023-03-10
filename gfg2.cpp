#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n = 17,j;

    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    
    int digits = (int)log10(j);
    int first = j / pow(10, digits);
    int last = j % 10;
    int a = first * (pow(10, digits));
   int  b = j % a;
    int j = b / 10;
    int nn = last * (pow(10, digits)) + (j * 10 + first);
    cout << " The number after swaping the first and last digits are: " << nn << endl;
}
