#include <iostream>
using namespace std;
void intersection(int arr[], int size, int com[],int sz)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if (arr[i]== com[j])
            {
                cout << arr[i] << "  ";
                break;
            }
        }
    }
}
int main()
{
    int arr[] = {1, 3, 4, 6, 8};
     int size = 5;
    int com[] = {2, 3, 4, 6};
    int sz = 4;
    cout << "intersection num is:" ;
     intersection(arr, size,com,sz);
    return 0;
}
