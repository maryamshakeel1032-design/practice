#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
         for(int i=0;i<arr.size();i++)
         {
            if (arr[i-1]<arr[i] && arr[i]>arr[i+1])
            {
               return i;
            }
         }
         return -1;
    }
    int main()
{
    vector<int> arr = {0,6,10,9,4,3}; 
    cout << peakIndexInMountainArray(arr)<< endl;
    return 0;
}