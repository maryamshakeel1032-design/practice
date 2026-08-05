#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int n = arr.size();
    int profit = 0;
    int mini = INT_FAST16_MAX;
    int maxi = INT_FAST16_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        profit = arr[i] - mini;
        maxi = max(maxi, profit);
    }
    cout << maxi;
    return maxi;
}
