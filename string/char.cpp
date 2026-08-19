#include <iostream>
using namespace std;

int main()
{
    // int arr[]={1,2,3,4,5};
// cout<<arr<<endl;   // address of array
// char str[]={'a','b','c','\0'}; // null char is ignored
 //char  str[]="hello"; // string literals(value can't change)
 //cout<<str<<endl; // constant pointer ,return string 
// cout<< strlen(str)<<endl;  // constant pointer
// cout<< str[2]<<endl;  // l
// cout<< str[5]<<endl;  // null 

// char str[100];
// cout<<"Enter the array:";
// cin>>str;  // without spaces
// cin.getline(str,100);  //with spaces
// cin.getline(str,100,'$'); // does not print after the delimiter
// cout<<str<<endl;

// char str[12];
// cout<<"Enter the array:";
// cin.getline(str,12); 
// for(char val:str)
// {
//     cout<<val<<" ";
// }
// cout<<endl;

char str[]="apnacollege";
int length=0;
for(int i=0;str[i]!='\0';i++)
{
    length++;
}
cout<<"Length:"<<length<<endl;
    return 0;
}