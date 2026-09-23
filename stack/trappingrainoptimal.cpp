#include <iostream>
#include <vector>
#include <stack>
using namespace std;
  int trap(vector<int>& height) { //tc:o(n) sc:o(1)
        int n = height.size();
        int ans=0;
        int l=0;
        int r=n-1;
        int lmax=0;
        int rmax=0;
        while(l<r)
        {
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            if(lmax<rmax) //left
            {
                ans+=lmax-height[l];
                l++;
            }
            else  //right
            {
                ans+=rmax-height[r];
                r--;
            }
        }
    return ans; 
    }
int main()
{
    vector<int> height = {4, 2, 0, 3, 2, 5};
    int ans = trap(height);
    cout <<"Trapping of rain water is:" << ans;
    return 0;
}