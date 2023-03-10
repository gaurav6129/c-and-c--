#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 9,10,2,4,6,8}
                  
   int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (s == e)
            return s;
        if (mid + 1 && arr[mid] > arr[mid + 1])
            return mid;
        if (mid - 1 >= &&arr[mid - 1] > arr[mid])
            return mid - 1;
        if (arr[s] > arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
}