#include <stdio.h>
int main()
{
    int a = 3, b = 4, c;
    c = Add(a, b);
    printf("=%d=%d=%d", a, b, c);
}
Add(int x, int y)
{
    int sum = x + y;
    return sum;
}