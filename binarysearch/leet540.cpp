#include <iostream>
#include <vector>
using namespace std;
int singleelement(vector<int>& arr) {
         for(int i=0;i<arr.size();i++)
         { if(i==0 && arr[i]!=arr[i+1])
            {
                return arr[i];
            }
            if(i==arr.size()-1 && arr[i]!=arr[i-1])
            {
                return arr[i];
            }
            if (arr[i-1]!=arr[i] && arr[i]!=arr[i+1])
            {
               return arr[i];
            }
         }
         return -1;
    }
    int main()
{
    vector<int> arr = {1,1,3,3,4,4,8}; 
    cout << singleelement(arr)<< endl;
    return 0;
}