#include <stdio.h>
#include <conio.h>
int main()
{

    int row, space, x, star;
    x = 0;
    for (row = 0; row <= 4; row++)
    {
        for (space = 0; space <= 4 - row; space++)
        {
            printf(" ");
        }
        for (star = 0; star <= x; star++)
        {
            printf("*");
        }
        x = x + 2;
        printf("\n");
    }
    x = 5;

    for (row = 0; row <= 3; row++)
    {
        for (space = 0; space <= row; space++)
        {
            printf(" ");
        }
        for (star = 0; star < x; star++)
        {
            printf("*");
        }
        for (space = 0; space <=row; space++)
        {
            printf(" ");
        }
        printf("\n");
        x = x - 2;
    }

    return 0;
}