#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 101, 89, 98, 93};
    int smallest=marks[0];
    for (int i =1; i < 5; i++)
    {
        if(marks[i]<marks[0])
        {
            smallest=marks[i];
        }
        cout << marks[i] << endl;
    }
    
    return 0;
}
