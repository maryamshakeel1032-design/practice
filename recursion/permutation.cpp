#include <iostream>
#include <vector>
using namespace std;
void getpre(vector<int>& nums,int idx,vector<vector<int>>& ans)   //tc(n!*n) sc:(n!)
{ 
    if(idx==nums.size()) 
    {
        ans.push_back(nums);
        return ;
    }
    for(int i=idx;i<nums.size();i++)
    {
        swap(nums[idx],nums[i]);
         getpre(nums,idx+1,ans);
         swap(nums[idx],nums[i]); //backtracking
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getpre(nums,0,ans);
        return ans;
    }
int main()
{ 
    vector<int> arr={1,2,3}; 
     vector<vector<int>> allsubset = permute(arr);
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