#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 101, 89, 98, 93};
      for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    {
        cout <<"Enter marks:";
        cin >> marks[i]  ;
    }
    for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    {
        cout << marks[i] << endl;
    }
    
    return 0;
}