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
int nCr(int n,int r)
{ int n_fac=fac(n);
  int r_fac=fac(r);
  int nminusr_fac=fac(n-r);
  return n_fac/(r_fac*nminusr_fac);
}
int main()
{
 int n=8;
 int r=2;
 cout<<nCr(n,r);
 return 0;
}