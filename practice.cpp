#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, number;
    int count = 0;
    printf("enter the value");
    scanf("%d", &number);
    if (number <= 0)
        printf("please enter positive integer");
    else if (number == 1)

        printf("value is==", a);

    else
        printf("print value");

    while (count < number)

           // printf("%d",a);
            c = a + b;
           // printf("%d",a);

            
            a = b;
            b = c;
            
            
            count=count+1;
        printf("%d",a);

    
    return 0;
}