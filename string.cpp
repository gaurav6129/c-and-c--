#include<iostream>
#include<string>
using namespace std;
int main()
{
   // string str="gaurav rai";
    //cout<<str;
    
  // string str1="gaurav";//two string add method 1
  // string str2="rai";
  // cout<<str1+str2<<endl;
  string str1="gaurav"; //two string add method 2
  string str2="rai";
  str1.append(str2);
  cout<<str1<<endl;


    return 0;
}