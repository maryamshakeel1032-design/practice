 #include<iostream>
  #include<vector>
using namespace std;
int binarysearch(vector<int> arr,int target,int st,int end) //tc:o(logn) sc:o(logn)
{
  if(st<=end)
  {
    int mid=st+(end-st)/2;
  if(arr[mid]==target) return mid;
  else if(arr[mid]<=target)
  {
    return binarysearch(arr,target,mid+1,end) ;
  }
   else
  {
    return binarysearch(arr,target,st,mid-1) ;
  }
}
return -1;
}
int main()
{ 
    vector<int> arr={-1,0,3,5,9,12};
    int target=9;
    int st=0;int end=arr.size()-1;
   cout<<binarysearch(arr,target,st,end) ;
 return 0;
}