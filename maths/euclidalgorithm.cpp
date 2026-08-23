#include <iostream>
using namespace std;
int  gcd(int a,int b) //o(log(min(a,b)))
{ while(a>0 && b>0)
    {
        if(a>b) {a=a%b;}
        else {b=b%a;}
    }
    if(a==0) return b;
    return  a;
}
int gcdrec(int a,int b) // recursive approach,assume first numbrer as larger
{
    if (b==0) return a;
   return  gcd(b,a%b);
    
}
int lcm (int a,int b)
{
    int gcd=gcdrec(a,b);
    return (a*b)/gcd;
}
int main()
{
  cout<< gcd(20,28)<<endl;
    cout<< gcd(6,12)<<endl;
      cout<< gcd(0,24)<<endl;
      cout<<gcdrec(0,24)<<endl; //recursive approach
      cout<<lcm(20,28)<<endl;
    return 0;
}