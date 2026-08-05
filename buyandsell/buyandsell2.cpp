#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxprofit = 0;
    int bestbuy=arr[0];
    for (int i = 1; i < arr.size(); i++)
    { 
        if(arr[i]>bestbuy)
        {
           maxprofit=max(maxprofit,arr[i]-bestbuy);
        }
       bestbuy=min(bestbuy,arr[i]);
    }
    cout<<maxprofit;
    return 0;
}
