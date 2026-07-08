#include <iostream>
using namespace std;
int reverse(int n)
{
    int ans=0;
    while(n>0)
   {
    int rem=n%10;
    n/=10;
    ans=(ans*10)+rem;
   }
   return ans;
}
int main()
{
    cout << reverse(125)<< endl;
    return 0;
}