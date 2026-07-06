#include<iostream>
using namespace std;
int primeno(int n)
{ 
    bool isprime=true;
    for(int i=2;i<=n-1;i++)
    {
         if(n%i==0)
          {
           isprime=false;
          }
    }
   return isprime;
}
int main()
{
    int n=10;

  for(int i=2;i<=n;i++)
    {
         if(primeno(i))
          {
           cout<<i<<" ";
          }
    }
 return 0;
} 