    #include<iostream>
using namespace std;
int fib(int n) {  //tc:o(2^n) sc:o(n)
        if(n==0 || n==1)
        {
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
int main()
{
 cout<<fib(6);
 return 0;
}