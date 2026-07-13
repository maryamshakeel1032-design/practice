#include <iostream>
using namespace std;

int main()
{
    int marks[6] = {99, 101, -89, 98, 93,345};
    int size=6;
    int largest=marks[0];
    int largestindex=0;
    for (int i=1; i<size; i++)
    {
        if(marks[i]>largest)
        {
            largest=marks[i];
             largestindex=i;
        }
    }
    cout<<"Largest num is:"<<largest<<endl;
    cout<<"Largestindex will be:"<<largestindex<<endl;
    return 0;
}
