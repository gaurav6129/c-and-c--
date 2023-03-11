#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int a[], int n)
{
   
   int first_largest = INT_MIN;

   
   for (int i = 0; i < n; i++)
   {
      
      if (first_largest < a[i])
      {
         first_largest = a[i];
      }
   }

   
   

   int second_largest = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (a[i] > second_largest and a[i] < first_largest)
      {
         second_largest = a[i];
      }
   }

   //return second_largest;
   int third_largest = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (a[i] > third_largest and a[i] < second_largest)
      {
         third_largest = a[i];
      }
   }

   return third_largest;

}

int main()
{
   int a[] = {12, 35, 1, 10, 34, 1};
   int n = sizeof(a) / sizeof(a[0]);

   int answer = findSecondLargest(a, n);

   cout << "The second largest element in the array is: " << answer;

   return 0;
}
