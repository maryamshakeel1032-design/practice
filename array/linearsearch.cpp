#include <iostream>
using namespace std;

int main()
{
    int marks[7] = {4,5,7,8,1,2,5};
    int size=7;
    int index=0;
     int target=10;
    for (int i=1; i<size; i++)
    {
        if(marks[i]==target)
        {
            index=i;
        }
    }
    cout<<"Target will be:"<<index<<endl;
    return 0;
}
