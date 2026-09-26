#include <iostream>
#include <vector>
using namespace std;
vector<int> slidingmax(vector<int> arr,int k) //o(n)
{  
    vector<int> ans;
    for(int i=0;i<arr.size()-k+1;i++)
    { 
        int maxi=INT32_MIN;
        for(int j=i;j<i+k;j++)
        {
          maxi=max(maxi,arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
}
int main()
{ 
    vector<int> arr={1,3,-1,-3,5,3,6,7};
    int k=3;
    vector<int> ans=slidingmax(arr,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<",";
    }
    return 0;
}