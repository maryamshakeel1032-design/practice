#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<int>& arr,int st,int mid,int end)  //o(n)
{
    vector<int> temp;
   int  i=st,j=mid+1;
   while(i<=mid && j<=end)
   {
      if(arr[i]<=arr[j])     // desending arr[i]>=arr[j]
      {
        temp.push_back(arr[i]);
        i++;
      }
      else 
      {
        temp.push_back(arr[j]);
        j++;
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
}
void mergesort(vector<int>& arr,int st,int end)  //tc:o(nlogn)  sc:o(n)
{
  if(st<end)
  {
     int mid=st+(end-st)/2;
     mergesort(arr,st,mid); //left
     mergesort(arr,mid+1,end); //right
     merge(arr,st,mid,end);   //o(n)
  }
}
 int main()
{  
   vector<int> arr={12,31,35,8,32,17};
   mergesort(arr,0,arr.size()-1);
   for(int val:arr)
   {
    cout<<val <<" ";
   }
 return 0;
}