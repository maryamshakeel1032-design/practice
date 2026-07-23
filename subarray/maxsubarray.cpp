#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxsum=INT_FAST8_MIN;
    for (int st = 0; st < n; st++)
    {    
        int csum=0;
        for (int end = st; end < n; end++)
        {
            csum+=arr[end];
            maxsum=max(csum,maxsum);
        }
    } 
    cout<<"Maximum subarray is:"<<maxsum;
    return 0;
}
