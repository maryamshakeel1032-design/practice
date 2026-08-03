#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int>& num)
{
     int fre = 1;
     int ans=num[0];
     int n=num.size();
    for(int i=1;i<n;i++)
    {
        if(num[i]==num[i-1])
        {
            fre++;
        }
        else
        {
           fre=1;
           ans=num[i];
        }
        
        if (fre > (n / 2))
        {
            return ans;
        }
    }
   return ans;
}
int main()
{
    vector<int> num = {1, 2, 2, 3, 3, 3, 3};
    cout << "Majority Element is:";
    cout << majorityelement(num);
}
