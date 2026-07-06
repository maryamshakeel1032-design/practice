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
 cout<<primeno(2);
 return 0;
} 