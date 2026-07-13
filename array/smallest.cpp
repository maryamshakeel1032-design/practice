#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 101, 89, 98, 93};
    int smallest=INT_FAST64_MAX;
    for (int i =1; i<5; i++)
    {
        if(marks[i]< smallest)
        {
            smallest=marks[i];
        }
    }
       cout << smallest << endl; 
    return 0;
}