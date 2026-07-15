#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4,2,5,8,3};
    int size=5;
    int product=1;
    for (int i =0; i<size; i++)
    {
        product*=arr[i];
    }
       cout << "product is:" <<product<< endl; 
    return 0;
}