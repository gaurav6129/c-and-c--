#include <iostream>
using namespace std;
int main()
{
    int arr[50],n;
    cout << "enter the number";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "new element in array";
    for ( int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
