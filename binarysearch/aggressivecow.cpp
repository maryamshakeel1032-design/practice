#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ispossible(vector<int> arr, int N, int C, int minalloweddistance) // o(n)
{
    int cow = 1, lastpos = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] - lastpos >= minalloweddistance)
        {
            cow++;
            lastpos = arr[i];
        }
        if (cow == C)
        {
            return true;
        }
    }
    return false;
}
int getdistance(vector<int> arr, int N, int C)
{
    sort(arr.begin(), arr.end()); // nlogn

    int st = 1, end = arr[N - 1] - arr[0], ans = -1;
    while (st <= end) //o(log(range)*n)
    {
        int mid = st + (end - st) / 2;
        if (ispossible(arr, N, C, mid)) // right
        {
            ans = mid;
            st = mid + 1;
        }
        else
            end = mid - 1; // left
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int N = 5, C = 3;
    cout << getdistance(arr, N, C) << endl;
    return 0;
}