#include<iostream>
using namespace std;
int digitsum(int n)
{
   int digit=0;
   while(n>0)
   {
   int  lastdigit=n%10;
     n=n/10;
     digit+=lastdigit;
   }
   return digit;
}
int main()
{
 cout<<digitsum(2356);
 return 0;
}