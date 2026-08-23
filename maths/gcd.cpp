#include <iostream>
#include <vector>
using namespace std;
int  gcd(int a,int b) //o(min(a,b))
{  int gcd=1;
    if(a==0) return gcd=b;
    if(b==0) return gcd=a;
    if(a==b) return gcd=a; //or gcd=b
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
  cout<< gcd(20,28)<<endl;
    return 0;
}