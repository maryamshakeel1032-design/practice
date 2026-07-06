#include<iostream>
using namespace std;
int fac(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}
int main()
{
 cout<<fac(4);
 return 0;
}