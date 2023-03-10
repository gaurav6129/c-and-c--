#include <stdio.h>
#include <conio.h>
int main()
{
    int p, q, m, n, c;
    int array1[100], array2[100], array3[100];

    printf("enter the number of element of the first sorted array");
    scanf("%d", &p);
    printf("enter element of the first sorted array");
    for (m = 0; m < p - 1; m++)

        scanf("%d", array1[m]);

    printf("enter number of element of the second sorted array");
    scanf("%d", &q);
    for (n = 0; n <= q - 1; n++)

        scanf("%d", &array2[n]);
    c = 0;
    m = 0;
    n = 0;

    while ((m < p) && (n < q))
    {
        if (array1[m] <= array2[n])
            array3[c] = array1[m++];
        else
            array3[c] = array2[n++];
        c++;
    }
    while (m < p)
    {
        array3[c] = array1[m];
        c++;
        m++;
        /* code */
    }
    while (n < q)
    {
        array3[c] = array2[n];
        c++;
        n++;
        /* code */
    }
    printf("merged array in ascending order");
    for (m = 0; m <= c - 1; m++)
        printf("%d", array3[m]);

    return 0;
}