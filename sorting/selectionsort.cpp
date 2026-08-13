#include <iostream>
#include <vector>
using namespace std;
void selection(vector<int> &arr, int n) // o(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest=i; //starting of unsorted part
        for (int j = i+1; j < n ; j++) //smallest from unsorted
        {
            if (arr[j] < arr[smallest])  // for desending arr[j] > arr[smallest]
            {
                smallest=j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}
int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = 5;
    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}