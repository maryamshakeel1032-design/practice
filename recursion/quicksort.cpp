#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int  partition(vector<int>& arr,int st,int end)
{
    int idx=st-1,pivot=arr[end];
    for(int j=st;j<end;j++)
    {  if(arr[j]<=pivot)    //desending arr[j]>=pivot
        {
           idx++;
           swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quicksort(vector<int>& arr,int st,int end)   //avgorpractical:o(nlogn)  worst:o(n*n)  sc:o(1)
{
if(st<end)
{
    int pidx=partition(arr,st,end);
    quicksort( arr,st,pidx-1); //left
    quicksort( arr,pidx+1,end); //right
}
}
 int main()
{  
   vector<int> arr={12,31,35,8,32,17};
   quicksort(arr,0,arr.size()-1);
   for(int val:arr)
   {
    cout<<val <<" ";
   }
 return 0;
}