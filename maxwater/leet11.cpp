#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
   vector<int>  height = {1,8,6,2,5,4,8,3,7};
   int maxwater=0;
         for (int i=0;i<height.size();i++)
         {
            for (int j=i+1;j<height.size();j++)
         {
           int  w=j-i;
           int h=min(height[i],height[j]);
           int currentwater=w*h;
           maxwater=max( maxwater,currentwater);
         }
         }
         cout<<maxwater;
         return 0; 
}
