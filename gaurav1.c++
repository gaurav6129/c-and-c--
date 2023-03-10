#include<iostream>
using namespace std;
int main()
{
    int da,da1,basic,hr1,hr,grosspayment;
    cout<<"enter the da1-";
    cin>>da1;
    cout<<"enter basic Amount-";
    cin>>basic;
    cout<<"enter the hr1-";
    cin>>hr1;
    da=(da1*basic)/100;
    hr=(hr1*basic)/100;
    grosspayment=basic+da+hr;
    cout<<"payment-"<<grosspayment;
     return 0;

}