#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
   vector<int>  height = {1,8,6,2,5,4,8,3,7};
   int maxwater=0;
         int leftp=0;
         int rightp=height.size()-1;
         while(leftp<rightp)
         {
           int  w=rightp-leftp;
           int h=min(height[leftp],height[rightp]);
           int currentwater=w*h;
           maxwater=max( maxwater,currentwater);
           height[leftp]<height[rightp]?leftp++:rightp--;
         }
         cout<<maxwater;
         return 0; 
}
