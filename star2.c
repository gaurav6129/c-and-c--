#include <stdio.h>
#include <conio.h>
int main()
{
    int row, star, space;
    for (row = 0; row <= 4; row++)
    {
        for (star = 0; star <= row; star++)
        {
            printf("*");
        }
        for (space = 0; space <= 4 - star; space++)
        {
            printf(" ");
        }

        printf("\n");
        return 0;
    }
}
