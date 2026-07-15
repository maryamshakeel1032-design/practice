#include <iostream>
using namespace std;

int main()
{
    int marks[6] = {99, 101, -89, 98, 93,345};
    int size=6;
    int largest=marks[0];
    int largestindex=0;
     int smallest=marks[0];
    int smallestindex=0;
    for (int i=1; i<size; i++)
    {
        if(marks[i]>largest)
        {
            largest=marks[i];
             largestindex=i;
        }
        if(marks[i]<smallest)
        {
           smallest=marks[i];
             smallestindex=i;
        }
    }
    swap(marks[smallestindex],marks[largestindex]);
         for(int i=0;i<size;i++)
         {
            cout<<marks[i]<<" ";
         }
    return 0;
}
