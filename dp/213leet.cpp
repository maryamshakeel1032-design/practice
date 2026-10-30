#include <iostream>
#include <vector>
using namespace std;
//Tabulation
int helperTab(vector<int>& nums,int st,int end)//House Robber 1 - Logic
{
    int n=nums.size();
  vector<int> dp(n-1);
   dp[0]=nums[st];
   dp[1]=max(nums[st],nums[st+1]);
   for(int i=st+2,j=2;i<=end;i++,j++)
   {
    dp[j]=max(dp[j-1],dp[j-2]+nums[i]);
   }
   return dp[n-2];
}
    int robTab(vector<int>& nums) { //tc:o(n) sc:o(n)
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums.size()==2)
        {
            return max(nums[0],nums[1]);
        }
        return max(helperTab(nums,0,nums.size()-2),helperTab(nums,1,nums.size()-1));
    }
//Memory 
int helperMemory(vector<int>& nums,int st,int end)//House Robber 1 - Logic
{
    int n=nums.size();
   int prev1=nums[st];
   int prev2=max(nums[st],nums[st+1]);
   int result=prev2;
   for(int i=st+2,j=2;i<=end;i++,j++)
   {
    result=max(prev2,prev1+nums[i]);
    prev1=prev2;
    prev2=result;
   }
   return result;
}
    int robMemory(vector<int>& nums) { //tc:o(n) sc:o(1)
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums.size()==2)
        {
            return max(nums[0],nums[1]);
        }
        return max(helperMemory(nums,0,nums.size()-2),helperMemory(nums,1,nums.size()-1));
    }
int main()
{
  vector<int> nums={2,7,9,3,1};
  cout<<"With Tabulation:"<<robTab(nums)<<endl;
  cout<<"With Memory Optimization:"<<robMemory(nums)<<endl;
    return 0;
}    