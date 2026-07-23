#include <iostream>
using namespace std;
 void unique(int arr[],int size)
{
    for(int i=0;i<size ;i++)
   {  
     int count=0;
     int check=arr[i];
    for(int j=0;j<size;j++)
    {
   if(check==arr[j])
     count++;
    }
     if(count==1)
   {
     cout<< arr[i]<<" ";
   }
   }
}
int main ()
{
    int size=6;
  int arr[]={1,1,3,5,5,8};
    cout<<"Unique element is:";
     unique(arr,size);
   return 0;
}