#include <iostream>
using namespace std;
int main()
{
    int arr[10][10], r, c;
    printf("WAVE Traversal in 2D array \n");
    printf("enter the size of 2D matrix :--");
    scanf("%d%d", &r, &c);
    printf("input 2D matrix \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < c; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < r; i++)
            {
                printf("%d", arr[i][j]);
            }
        }
        else
        {
            for (int i = r - 1; i >= 0; i--)
            {
                printf("%d", arr[i][j]);
            }
        }
    }
}