#include <iostream>
#include <vector>
using namespace std;
int maxsum(vector<int>& vec)
{
    int csum = 0;
    int maxsum = INT_FAST64_MIN;
    for (int val : vec)
    {
        csum += val;
        maxsum = max(csum, maxsum);
        if (csum < 0)
        {
            csum = 0;
        }
    }
    return maxsum;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Maximum subarray is:" << maxsum(vec);
    return 0;
}
