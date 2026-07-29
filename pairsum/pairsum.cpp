#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> num,int target)
{ 
    vector<int> ans;
 for(int i=0;i<num.size();i++)
 {
    for(int j=i+1;j<num.size();j++)
 {
      if(num[i]+num[j]==target)
      {
   ans.push_back(i);
    ans.push_back(j);
      }
 }
 }
 return ans;
}
 int main()
    { 
vector<int> num={3,7,8,9};
int target=16;
  
     vector<int> ans=pairsum(num,target);
     cout<<ans[0]<<" , "<<ans[1]<<endl;
     return 0;
    }
