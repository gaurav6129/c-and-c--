#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="gaurav rai";
    cout<<str<<endl;
    cout<<"push string  ";
    str.push_back('i');
    cout<<str<<endl;
    cout<<"pop string  m";
    str.pop_back();
    cout<<str<<endl;
    return 0;


}