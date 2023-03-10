//benjamine  bulb  puzzle...............
#include <iostream>
using namespace std;
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++)
    {
        printf("%d", i * i);
    }
    
}