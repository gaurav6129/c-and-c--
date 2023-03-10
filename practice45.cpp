#include <stdio.h>
using namespace std;
int main()
{
    int n;
    printf("enter the element in array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    for (int himanshu = maximum; himanshu >= 1; himanshu--)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= himanshu)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}