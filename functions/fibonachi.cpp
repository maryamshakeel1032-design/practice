#include<iostream>
using namespace std;
int fibonai(int n)
{
   int n1=0;
   int n2=1;
   int fib=0;
   for(int i=0;i<n-1;i++)
   {
    fib=n1+n2;
    n1=n2;
    n2=fib;
   }
   return fib;
}
int main()
{
 cout<<fibonai(6);
 return 0;
}