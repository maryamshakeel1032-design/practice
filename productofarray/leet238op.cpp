#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int>& vec)
{  vector<int> ans(vec.size(),1);
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec.size();j++)
    {
       if(i!=j)
       {
       ans[i]*=vec[j]; 
       }
    }
    }
 return ans;
}
int main()
{
    vector<int> vec = {1,2,3,4};
    cout<<"Product will be except self:";
    vector<int> ans=product(vec);
    for(int i=0;i<vec.size();i++)
    {
     cout<<ans[i]<<",";
    }
    return 0;
}