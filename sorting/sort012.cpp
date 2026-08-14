#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n=10;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}