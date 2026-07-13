#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 101, -89, 98, 93};
    int size=5;
    int largest=INT_FAST64_MIN;
    for (int i =0; i<size; i++)
    {
        largest=max(marks[i], largest);
        if(marks[i]<largest)
        cout<<i<<endl;
    }
    return 0;
}
