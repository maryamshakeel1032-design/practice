#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int trap(vector<int>& height) {
int n = height.size();
int totalWater = 0;
for(int i=0;i<n;i++){
int Imax = height[i];
int rmax = height[i];
for(int j=0;j<i;j++){
Imax = max(Imax,height[j]);
}
for(int j=i;j<n;j++){
rmax = max(rmax,height[j]);
}
totalWater+=min(Imax,rmax)-height[i];
}
return totalWater;
}
int main()
{  
     vector<int> ht={4,2,0,3,2,5};
    int ans=trap(ht);
    cout<<ans;
    return 0;
}