#include <iostream>
using namespace std;
void change(int* point) // pass by referrence using pointer
{
    *point=20;
}
int main()
{
    int a=10;
    int* ptr=&a;
    int** ptr2=&ptr;
    int arr[]={2,4,4,5,6}; // first elemnt always a pointer

    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;
    cout<<*(ptr2)<<endl;
    cout<<(ptr)<<endl;
    cout<<**(ptr2)<<endl;

    change(&a);
    cout<<"Value in main will be:"<<a<<endl;

    cout<<*arr<<endl;

     cout<<ptr<<endl;
     ptr++;
     cout<<ptr<<endl; // changes in address(hexidecimal)+4byte
     ptr=ptr+3; //12 bytes incresed
      cout<<ptr<<endl; 

      cout<<*(arr+1)<<endl; // pointing second member of array
    
      int* ptr3; //let 100
      int* ptr1=ptr3+2; // l08 two integr's space   
      cout<<ptr1-ptr3<<endl; // 2 integer (8 byte)
      cout<<(ptr1<ptr3)<<endl; //ptr1 have more two integer (8 byte)
    return 0;
}