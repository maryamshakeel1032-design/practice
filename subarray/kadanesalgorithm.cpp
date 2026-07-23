#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxsum = INT_FAST64_MIN;
     int csum = 0;
    for (int i = 0; i < n; i++)
    {
         csum += arr[i];
        maxsum = max(csum, maxsum);
        if(csum<0)
            csum=0;
    }
    cout << "Maximum subarray is:" << maxsum;
    return 0;
}
