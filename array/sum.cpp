#include <iostream>
using namespace std;

int main()
{
    int arr[] = {99, 101, 89, 98, 93};
    int size=5;
    int sum=0;
    for (int i =0; i<size; i++)
    {
        sum+=arr[i];
    }
       cout << "Sum is:" <<sum<< endl; 
    return 0;
}