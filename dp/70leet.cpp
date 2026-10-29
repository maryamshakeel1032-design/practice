#include <iostream>
#include <vector>
using namespace std;
//Recursion
 int climbStairsRec(int n) { 
        if(n==1 || n==2)
        {
            return n;
        }
        return climbStairsRec(n-1)+climbStairsRec(n-2);
    }
//Memoization =>Risk of stack overflow thus Tabulation is better
int helper(int n,vector<int>& dp)  //tc:o(n) sc:o(1)
{
      if(n==1 || n==2)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]= helper(n-1,dp)+helper(n-2,dp);
}
    int climbStairsMem(int n) {
       vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
//Tabulation
     int climbStairsTab(int n) {  //tc:o(n) 
          if(n==1 || n==2)
        {
            return n;
        }
       vector<int> dp(n+1);
       dp[1]=1;
       dp[2]=2;
       for(int i=3;i<=n;i++)
       {
        dp[i]=dp[i-1]+dp[i-2];
       }
        return dp[n];
    }
//Memory 
   int climbStairsMemory(int n) {  //tc:o(n) sc:o(1)
          if(n==1 || n==2)
        {
            return n;
        }
     int prev2=1; //n-2
     int prev1=2;  //n-1
     int result=prev1;
       for(int i=3;i<=n;i++)
       {
        result=prev1+prev2;
        prev2=prev1;
        prev1=result;
       }
        return result;
    }    
int main()
{
  int n=5;
  cout<<"Recursive:"<<climbStairsRec(n)<<endl;
  cout<<"With Memoziation:"<<climbStairsMem(n)<<endl;
  cout<<"With Tabulation:"<<climbStairsTab(n)<<endl;
  cout<<"With Memory Optimization:"<<climbStairsMemory(n)<<endl;
    return 0;
}