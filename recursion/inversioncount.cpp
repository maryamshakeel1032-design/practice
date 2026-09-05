#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int merge(vector<int>& arr,int st,int mid,int end)  //o(n)
{
    vector<int> temp;
   int  i=st,j=mid+1;
   int invcount=0;
   while(i<=mid && j<=end)
   {
      if(arr[i]<=arr[j])     
      {
        temp.push_back(arr[i]);
        i++;
      }
      else 
      {
        temp.push_back(arr[j]);
        j++;
        invcount+=(mid-i+1);
      }
   }
    while(i<=mid)   //left
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)   //right
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++)
    {
        arr[idx+st]=temp[idx];
    }
    return invcount;
}
int mergesort(vector<int>& arr,int st,int end)  //tc:o(nlogn)  sc:o(n)
{
  if(st<end)
  {
     int mid=st+(end-st)/2;
     int leftcount=mergesort(arr,st,mid); //left
     int rightcount=mergesort(arr,mid+1,end); //right
     int invcount=merge(arr,st,mid,end);   //o(n)
     return leftcount+rightcount+invcount;
  }
  return 0;
}
 int main()
{  
  //  vector<int> arr={6,3,5,2,7};
    vector<int> arr={1,3,5,10,2,6,8,9};
   int ans=mergesort(arr,0,arr.size()-1);
  cout<<"InvCount:"<<ans<<endl;
 return 0;
}