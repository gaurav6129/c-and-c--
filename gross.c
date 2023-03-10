#include<stdio.h>
#include<conio.h>
int main()
{
    int da1,da,basic,hr1,hr,gross ;
    printf("enter the number da1--->>");
    scanf("%d",&da1);
    printf("enter the number basic--->>");
    scanf("%d",&basic);
    printf("enter the number--->>");
    scanf("%d",&hr1);
    da=(da1+basic)/100;
    hr=(hr1*basic)/100;
    gross =basic+da+hr;
    printf("grosspayment  %d",gross );
    return 0;

}