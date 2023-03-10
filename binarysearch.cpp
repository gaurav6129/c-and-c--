#include <iostream>
using namespace std;
int binarysearch(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int end[6] = {23, 24, 25, 26, 27, 28};
    int key = 25;
    cout << "position" << end[6];
}