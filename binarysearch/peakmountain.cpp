#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
         int max=INT64_MAX;
         int ans=0;
         for(int i=0;i<arr.size();i++)
         {
            if (arr[i]>max)
            {max=arr[i];
            ans=i;
            }
         }
         return ans;
    }
    int main()
{
    vector<int> arr = {6,0,10,1,2,3,4,5}; 
    cout << peakIndexInMountainArray(arr)<< endl;
    return 0;
}