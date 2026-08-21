#include <iostream>
using namespace std;
int countPrimes(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int n = 47;
    cout << countPrimes(n) << endl;

    return 0;
}