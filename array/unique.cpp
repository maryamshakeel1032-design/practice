#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
    int ans=0;
 for(int i=0;i<size;i++)
 {
   ans=ans^arr[i];
 }
 return ans;
}
    int main()
    {
        int arr[] = {4, 4, 6, 7, 7};
        int size = 5;
       int result= unique(arr, size);
       cout<<"Unique num is:"<<result<<endl;
        return 0;
    }
