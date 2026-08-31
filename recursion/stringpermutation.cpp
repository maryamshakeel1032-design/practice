#include <iostream>
#include <vector>
using namespace std;
void getpre(string& arr,int idx,vector<string>& ans)   //tc(n!*n) sc:(n!)
{ 
    if(idx==arr.size()) 
    {
        ans.push_back(arr);
        return ;
    }
    for(int i=idx;i<arr.size();i++)
    {
        swap(arr[idx],arr[i]);
         getpre(arr,idx+1,ans);
         swap(arr[idx],arr[i]); //backtracking
    }
}
int main()
{ 
    string arr={"abc"};
    vector<string> ans;
    getpre(arr,0, ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
          cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}