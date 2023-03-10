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
    int even[6] = {1,2,3,4,5,6};
    int key=3;
    cout<<"position="<<even[6];
    //int index= binarysearch(even,3,6);
    //cout<<"position="<<index<<endl;

    
    return 0;
}
