#include <iostream>
#include <vector>
using namespace std;
void digits(int n) //o(log10n)
{ while(n>0)
    {
 int digit=n%10;
    cout<<digit<<endl;
    n=n/10;
    }
}
void count(int n)
{ int count=0;
 while(n>0)
    {
 int digit=n%10;
    count++;
    n=n/10;
    }  
    cout<<count<<endl; 
}
void sum(int n)
{ int sum=0;
 while(n>0)
    {
 int digit=n%10;
  sum+=digit;
    n=n/10;
    }  
    cout<<sum<<endl; 
}
int main()
{
    int n = 3586;
   digits(n);
   count(n);
  // cout<<(int)(log10(n)+1)<<endl; // shortcut for count of numbers
   sum(n);
    return 0;
}