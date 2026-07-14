#include <iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
{
for (int i=1; i<size; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {4,5,7,8,1,2,5};
    int size=7;
     int target=10;
    
    cout<<"Target will be:"<<linearsearch(arr,size,target)<<endl;
    return 0;
}
