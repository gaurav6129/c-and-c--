#include <stdio.h>
#include <conio.h>
int Add(int, int) ;
void main()
{
    int a = 60, b = 40, result;
    result = Add(a,b);
    printf("%d", result);
}
int Add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}
