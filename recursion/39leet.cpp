#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<vector<int>> s;
void  helper(vector<int>& arr,int i,vector<int>& combin,vector<vector<int>>& ans, int tar)
{   
    if(i==arr.size() || tar<0 )
{
    return;
}
if(tar==0)
{ 
    if(s.find(combin)==s.end())
    {
      ans.push_back(combin);
      s.insert(combin);
    }
    
    return;
}
    combin.push_back(arr[i]);
    helper(arr,i+1,combin,ans,tar-arr[i]);  // single
    helper(arr,i,combin,ans,tar-arr[i]);   //multiple
    combin.pop_back();                     //backtrack
    helper(arr,i+1,combin,ans,tar);        //exclude
}
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combin;
        helper(arr,0,combin,ans,tar); 
        return ans;
    }
    int main()
{  
    vector<int> arr={2,3,5};
    int tar=8;
 vector<vector<int>> ans=combinationSum(arr, tar);
 for(vector<int> combin : ans)
{
    for(int val : combin)
    {
        cout << val << " ";
    }
    cout << endl;
}
 return 0;
}