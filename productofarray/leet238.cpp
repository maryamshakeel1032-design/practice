#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int>& vec)
{  vector<int> ans(vec.size(),1);
    for(int i=0;i<vec.size();i++)
    {
          int product=1;
        for(int j=0;j<vec.size();j++)
    {
       product*=vec[j]; 
       if(i==j)
       {
        product/=vec[j]; //if zero then division by zero ,give error on runtime
       }
    }
    ans[i]=product;
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