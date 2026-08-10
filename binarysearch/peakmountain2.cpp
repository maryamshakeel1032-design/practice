#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) 
{        
         int st=0;
         int end=arr.size()-1;
        while(st<end)
        { 
            int mid=st+(end-st)/2;
           
             if(arr[mid]<arr[mid+1])
             {
                st=mid+1;
             }
             else end=mid;
        }
         return st;
    }
    int main()
{
    vector<int> arr = {0,10,5,2}; 
    cout << peakIndexInMountainArray(arr)<< endl;
    return 0;
}