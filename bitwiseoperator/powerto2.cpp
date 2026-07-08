#include <iostream>
using namespace std;
bool power(int n)
{
     if(n<=0)
    return false;
    while (n > 1)
    {
        int rem = n % 2;
         if (rem == 0)
        {
            n/=2;
        }
        if(rem!=0)
        return false;
    }
    return true;
}
int main()
{
    cout << power(12) << endl;
    return 0;
}