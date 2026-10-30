#include <iostream>
#include <vector>
using namespace std;
// Tabulation
int mincostTab(vector<int> &height) // tc:o(n) ,sc:O(n)
{
    int n = height.size();
    if (n == 1)
    {
        return 0;
    }
    vector<int> dp(n); // dp[i]=min cost to rach last stair i
    dp[0] = 0;
    dp[1] = abs(height[1] - height[0]);
    for (int i = 2; i < n; i++)
    {
        int jump1 = dp[i - 1] + abs(height[i] - height[i - 1]);
        int jump2 = dp[i - 2] + abs(height[i] - height[i - 2]);
        dp[i] = min(jump1, jump2);
    }
    return dp[n - 1];
}
// Memory
int mincostMemory(vector<int> &height) // tc:o(n) ,sc:O(1)
{
    int n = height.size();
    if (n == 1)
    {
        return 0;
    }
    vector<int> dp(n); // dp[i]=min cost to rach last stair i
    int prev1 = 0;
    int prev2 = abs(height[1] - height[0]);
    int result = prev2;
    for (int i = 2; i < n; i++)
    {
        int jump1 = prev2 + abs(height[i] - height[i - 1]);
        int jump2 = prev1 + abs(height[i] - height[i - 2]);
        result = min(jump1, jump2);
        prev1 = prev2;
        prev2 = result;
    }
    return result;
}
int main()
{
    vector<int> height = {30, 20, 50, 10, 40}; // 30
                                               //  vector<int> height={20,30,40,20}; //20
    cout << "Tabulation:" << mincostTab(height) << endl;
    cout << "Memory optimization:" << mincostMemory(height) << endl;
    return 0;
}