#include <iostream>
#include <algorithm>
using namespace std;

void nearly_sorted(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int j = min(n - 1, i + k);
        int pos = lower_bound(arr + i, arr + j + 1, arr[i]) - arr;
        reverse(arr + i, arr + pos);
    }
}

// Example usage
int main()
{
    int arr[] = {6, 5, 3, 2, 8, 10, 9, 1, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10; // Number of swaps allowed
    nearly_sorted(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
