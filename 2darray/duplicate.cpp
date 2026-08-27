 #include <iostream>
 #include <vector>
 #include <unordered_set>
using namespace std;
  int findDuplicate(vector<int>& nums) { //tc:o(n) && sc:o(n)
      unordered_set<int> s;
    //   for(int i=0;i<nums.size();i++)
    //   {
    //      if (s.find(nums[i])!=s.end())
    //         {
    //             return nums[i];
    //         }
    //         s.insert(nums[i]);
        
    //   } 
    for(int val:nums)
    {
        if (s.find(val)!=s.end())
            {
                return val;
            }
            s.insert(val);
    }
      return  -1; 
    }
int main()
{ vector<int> nums = {1,3,4,2,2};
cout<<findDuplicate(nums) <<endl;
 return 0;
}