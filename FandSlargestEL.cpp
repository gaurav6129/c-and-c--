#include <iostream>
using namespace std;
int main()
{
    int first_largest, second_largest, third_largest;
    // int a[50];
    // cout<<n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
    int a[]={1,5,10,9,7,8};
    int n=6;
    for (int i = 0; i < n; i++)
    {

        if (first_largest < a[i])
        {
            first_largest = a[i];
        }
    }

    //    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > second_largest and a[i] < first_largest)
        {
            second_largest = a[i];
        }
    }

    // return second_largest;
    //    int third_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > third_largest and a[i] < second_largest)
        {
            third_largest = a[i];
        }
    }
}