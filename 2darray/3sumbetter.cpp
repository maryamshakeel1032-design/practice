#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
   vector<vector<int>> threeSum(vector<int>& nums) {  //tc:o(n*n *logn(unique tripet)) ,sc:(o(unique tripet))
        int n=nums.size();
        set<vector<int>> uniquetriple;
        for(int i=0;i<n;i++)
        {   
            int target=-nums[i];
            set<int> s;
             for(int j=i+1;j<n;j++)
            {
               int c=target-nums[j];
                if(s.find(c)!=s.end())
                {
                    vector<int> trip={nums[i],nums[j],c};
                    sort(trip.begin(),trip.end());
                    uniquetriple.insert(trip);
                }
                s.insert(nums[j]);
            }
        }
         vector<vector<int>> ans(uniquetriple.begin(),uniquetriple.end());
        return ans;
    }
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << endl;
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}