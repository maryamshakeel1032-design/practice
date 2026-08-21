#include <iostream>
#include <vector>
using namespace std;
  int countPrimes(int n) {
        int count=0;
       vector<bool> isprime(n+1,true);
       for(int i=2;i<n;i++)
       {
        if(isprime[i]==true)
        {
            count++;
        }
        for(int j=i*2;j<n;j=j+i)
        {
            isprime[j]=false;
        }
       }
       return count;
    }
int main()
{
    int n = 50;
    cout << countPrimes(n) << endl;

    return 0;
}