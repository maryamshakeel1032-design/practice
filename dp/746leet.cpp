#include <iostream>
#include <vector>
using namespace std;
//Tabulation
    int minCostClimbingStairsTab(vector<int>& cost) { //tc:o(n) sc:o(n)
      int n=cost.size();
      vector<int> dp(n+1);
      dp[0]=0;
      dp[1]=0;
      for(int i=2;i<=n;i++)
      {
        dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
      }
      return dp[n];
    }
//Memory 
    int minCostClimbingStairsMemory(vector<int>& cost) { //tc:o(n) sc:o(1)
      int n=cost.size();
      int prev1=0;
     int prev2=0;
     int result=prev2;
      for(int i=2;i<=n;i++)
      {
        result=min(prev2+cost[i-1],prev1+cost[i-2]);
        prev1=prev2;
        prev2=result;
      }
      return result;
    }
int main()
{
    // vector<int> cost={10,15,20};
   vector<int> cost={1,100,1,1,1};
  cout<<"With Tabulation:"<<minCostClimbingStairsTab(cost)<<endl;
  cout<<"With Memory Optimization:"<<minCostClimbingStairsMemory(cost)<<endl;
    return 0;
}    