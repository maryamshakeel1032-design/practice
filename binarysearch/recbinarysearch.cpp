#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> arr, int tar, int st, int end) // itertative
{
    int mid = st + (end - st) / 2;

    if (st <= end)
    {
        if (tar > arr[mid])
        {
            return binarysearch(arr, tar, mid + 1, end); // 2nd half
        }
        else if (tar < arr[mid])
        {
            return binarysearch(arr, tar, st, mid - 1); // 1st half
        }
        else
            return mid;
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd
    int tar1 = 12;
    int st = 0, end = arr1.size();
    cout << binarysearch(arr1, tar1, st, end) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even
    int tar2 = 10;
    int st2 = 0, end2 = arr2.size();
    cout << binarysearch(arr2, tar2, st2, end2) << endl;
    return 0;
}