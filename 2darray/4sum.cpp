#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 vector<vector<int>> fourSum(vector<int>& nums, int target) {   //tc:(nlogn + n*n*n) ,sc:(uniquegroup)
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {    if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;)
        { 
             int k=j+1,l=n-1; 
           while(k<l)
           {
           long long  sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
            if(sum<target)
            {
                k++;
            }
            else if(sum>target)
            {
                l--;
            }
            else {
                ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                k++;l--;
                while(k<l && nums[k]==nums[k-1])
                {
                    k++;
                }
            }
           }
           j++;
           while(j<n && nums[j]==nums[j-1])
           {
            j++;
           }
        }
           
        }
        return ans;
    }
int main()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> ans = fourSum(nums,target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}