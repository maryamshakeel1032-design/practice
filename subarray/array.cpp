#include <iostream>
using namespace std;
 void reverse(int arr[],int size)
 {
   int st=0;
   int end=size-1;
   while(st<end)
   {
    swap(arr[st],arr[end]);
    st++;
    end--;
   }
 }
int main ()
{
    int size=4;
  int arr[]={1,3,5,8};
  reverse(arr,size);
  for(int i=0;i<size;i++)
  {
  cout<<arr[i]<<",";
  }
    return 0;
}