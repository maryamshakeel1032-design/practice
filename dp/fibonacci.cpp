#include <iostream>
#include <vector>
using namespace std;
//fibonachi recursion
int fibo(int n) //tc:o(2^n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
//fibonachi dp ->Memoization
int fiboDP(int n,vector<int>& f)  //tc:o(n)
{
    if(n<=1)
    {
        return n;
    }
    if(f[n]!=-1)
    {
        return f[n];
    }
    return f[n]=fiboDP(n-1,f)+fiboDP(n-2,f);
}
//fibonachi dp ->Tabulation
int fiboTabDP(int n)   //tc:o(n)
{
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
  int n=6;
  vector<int> f(n+1,-1);
  cout<<"Recursive:"<<fibo(n)<<endl;
  cout<<"With Memoziation:"<<fiboDP(n,f)<<endl;
  cout<<"With Tabulation:"<<fiboTabDP(n)<<endl;
    return 0;
}