#include<iostream>
using namespace std;
int main()
{
    //int max=10;
    //int arr[max]={12,23,34,45,6};
    int arr[]={12,23,34,45,6};
    char mesg[]={'g','a','u','r','a','v','\0'};
    char ram[]="hey ram ";
    printf("%s:-%s",mesg,ram);
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",arr[i]);
    }
}