#include <iostream>
#include <vector>
using namespace std;
bool ispossible(vector<int> arr, int n, int m, int maxallowedtime) //o(n)
{
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxallowedtime)
            return false;
        if (time + arr[i] <= maxallowedtime)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false : true;
}
int painter(vector<int> arr, int n, int m) // o(log(sum)*n)
{   if(m>n) return -1;
    int sum = 0, maxval=INT64_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxval=max(maxval,arr[i]);
    }
     int st =maxval, end = sum, ans = -1;
    while (st <= end)  //o(log(sum))
    {
        int mid = st + (end - st) / 2;
        if (ispossible(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else
            st = mid + 1; // right
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout<< painter(arr,n,m)<<endl;
    return 0;
}