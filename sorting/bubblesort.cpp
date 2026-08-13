#include <iostream>
#include <vector>
using namespace std;
void bubble(vector<int> &arr, int n) // o(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isswap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])  // for desending arr[j] < arr[j + 1]
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            return;
        }
    }
}
int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = 5;
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}