#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int>& num)
{
     int fre = 0;
     int ans=0;
     int n=num.size();
    for(int i=0;i<n;i++)
    {
        if(fre==0)
        {
            ans=num[i];
            
        } 
        if (ans==num[i])
        {
            fre++;
        }
         else
        {
           fre--; 
        }
    }
   return ans;
}
int main()
{
    vector<int> num = {3, 2, 1, 2, 1, 1, 1};
    cout << "Majority Element is:";
    cout << majorityelement(num);
}
