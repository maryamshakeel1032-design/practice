#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) { //tc:o(n) sc:o(n)
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<k;i++) //o(k)
        {
            while(dq.size()>0 && nums[dq.back()]<=nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k;i<nums.size();i++) //o(n-k)
        {
            ans.push_back(nums[dq.front()]);
         while(dq.size()>0 && dq.front()<=i-k)
         {
            dq.pop_front();
         }
         while(dq.size()>0 && nums[dq.back()]<=nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
int main()
{ 
    vector<int> nums={1,3,-1,-3,5,3,6,7};
    int k=3;
    vector<int> ans=maxSlidingWindow(nums,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<",";
    }
    return 0;
}