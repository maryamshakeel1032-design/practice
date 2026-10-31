#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static bool compare(vector<int>& a,vector<int>& b)
{
double a1=(1.0*a[0])/a[1];
double b1=(1.0*b[0])/b[1];
return a1>b1;
}
double fractionalKnapsack(vector<vector<int>>& items,int k) //tc:o(nlogn)
{
sort(items.begin(),items.end(),compare); //o(nlogn)
double maxval=0.0;
for(auto& item:items)
{
    int val=item[0];
    int wt=item[1];
    if(wt<=k)
    {
      maxval+=val;
      k-=wt;
    }
    else
    {
      maxval+=((double)val/wt)*k;
      break;
    }
}
return maxval;
}
int main()
{
    vector<vector<int>> items={ {60,10},{100,20},{120,30},{80,40},{150,15}}; //val,wt
    int k=60;
    cout<<fractionalKnapsack(items,k)<<endl;
    return 0;
}    