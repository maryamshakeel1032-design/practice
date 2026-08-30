#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subset(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allsubset) //o(n *2^n)
{
    if(i==nums.size())
    {
        allsubset.push_back({ans});
        return;
    }
     ans.push_back(nums[i]);
     subset( nums, ans,i+1, allsubset);
     ans.pop_back();
     int idx=i+1;
     while(idx<nums.size() && nums[idx]==nums[idx-1])
     {
        idx++;
     }
     subset( nums, ans,idx, allsubset);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubset;
        vector<int> ans;
        subset(nums,ans,0,allsubset);
        return allsubset;
    }
int main()
{ 
    vector<int> arr={1,2,2}; 
     vector<vector<int>> allsubset = subsetsWithDup(arr);
     for(int i=0;i<allsubset.size();i++)
     {
        for(int j=0;j<allsubset[i].size();j++)
        {
            cout<<allsubset[i][j]<<" ";
        }
        cout<<endl;
     }
 return 0;
}