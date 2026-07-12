#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 101, 89, 98, 93};
    for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    {
        cout << marks[i] << endl;
    }
    cout << sizeof(marks) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0;
}