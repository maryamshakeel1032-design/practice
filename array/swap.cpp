#include <iostream>
using namespace std;
void reversearray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[7] = {4, 5, 7, 8, 1, 2, 5};
    int size = 7;
    reversearray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<"," ;
    }
    return 0;
}
