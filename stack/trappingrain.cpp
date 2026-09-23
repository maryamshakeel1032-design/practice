#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    int border =0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int  lmax=height[i];
        int rmax=height[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, height[j]);
        }
        for (int j = i; j < n; j++)
        {
            rmax = max(rmax, height[j]);
        }
        border = min(lmax, rmax) - height[i];
        ans = ans + border;
    }
    return ans;
}
int main()
{
    vector<int> height = {4, 2, 0, 3, 2, 5};
    int ans = trap(height);
    cout<<"Trapping of rain water is:" << ans;
    return 0;
}