#include<stdio.h>
#include<conio.h>


void push()
{
    int item,top,stack;
    if (top < 9)
    {
        printf("enter the number");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
    else
        printf("stack is overflow");
        
}
