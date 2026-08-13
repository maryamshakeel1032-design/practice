#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<int> &arr, int n) // o(n^2)
{
    for (int i = 1; i < n ; i++)
    {
        int current=arr[i]; 
        int previous=i-1;
        while(previous>=0 && arr[previous]>current) //for deseceding arr[previous]<current
        {
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current; // placing current at correct position
    }
}
int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = 5;
    insertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}