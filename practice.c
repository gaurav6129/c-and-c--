#include <stdio.h>
int main()
{
    int r, c, i, j, k[10][10];
    printf("enter r=");
    scanf("%d", &r);
    printf("enter c=");
    scanf("%d", &c);
    printf("Wakanda monuments:-\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &k[i][j]);
        }
    }
    printf("path:-\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", k[i][j]);
        }
        printf("\n");
    }
    printf("traversed by traveller:-\n");
    for (i = 0; i < c; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", k[j][i]);
        }

        else
        {
            for (j = r - 1; j >= 0; j--)
            {
                printf("%d", k[j][i]);
            }
        }
    }
    return 0;
}
