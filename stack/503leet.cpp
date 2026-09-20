#include <iostream>
#include <vector>
#include <stack>
using namespace std;
 vector<int> nextGreaterElements(vector<int>& nums) {  //tc:o(n) sc:o(n)
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--)
        {
            while(s.size()>0 && nums[s.top()]<=nums[i%n]) 
            {
                s.pop();
            }
            ans[i%n]=s.empty()?-1:nums[s.top()];
            s.push(i%n);
        }
        return ans;
    }
int main()
{   
    vector<int> nums={1,2,3,4,3};
    // vector<int> nums={3,6,5,4,2};
    vector<int> ans=nextGreaterElements(nums);
    for(int val:ans)
    {
        cout<<val<<",";
    }
    cout<<endl;
    return 0;
}



