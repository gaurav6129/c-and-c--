#include<iostream>
using namespace std;
int main()
{
    int r,c, arr1[10][10];
    printf("my first matrix size user input ");
    scanf("%d%d",&r,&c);
    for ( int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {    
            scanf("%d",arr1[i][j]);
        }
        
    }
    

}