#include <iostream>
#include <vector>
using namespace std;
//Tabulation
    int robTab(vector<int>& nums) { //tc:o(n)
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int> dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);  //dp[i-1] => unchoosen,dp[i-2]+nums[i]) =>choosen
        }
        return dp[n-1];
    }
//Memory 
    int robMemory(vector<int>& nums) { //tc:o(n) sc:o(1)
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
    int prev1=nums[0];
    int prev2=max(nums[0],nums[1]);
    int result=prev2;
        for(int i=2;i<n;i++)
        {
           result=max(prev2,prev1+nums[i]);
           prev1=prev2;
           prev2=result;
        }
        return result;
    }  
int main()
{
  vector<int> nums={2,7,9,3,1};
  cout<<"With Tabulation:"<<robTab(nums)<<endl;
  cout<<"With Memory Optimization:"<<robMemory(nums)<<endl;
    return 0;
}