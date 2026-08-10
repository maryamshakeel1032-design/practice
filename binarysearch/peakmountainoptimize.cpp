#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int st=1,end=arr.size()-2;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) 
            {
                return mid;
            }
            else if (arr[mid-1]<arr[mid]) //in incrreasing nad search in right side
            {
                st=mid+1;
            }
            else end=mid-1;
        }
         return -1;
    }
    int main()
{
    vector<int> arr = {0,6,10,9,4,3}; 
    cout << peakIndexInMountainArray(arr)<< endl;
    return 0;
}