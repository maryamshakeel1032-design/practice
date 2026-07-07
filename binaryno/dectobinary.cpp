#include<iostream>
using namespace std;
int decimalnum(int decnum)
{ int binary=0;
    int power=1;
    while(decnum>0)
    {
       int rem=decnum%2;
        decnum/=2;
        binary+=(rem*power);
        power*=10;
    }
    return binary;
}
int main()
{ for(int i=1;i<=10;i++)
    {
        cout<<decimalnum(i)<<endl;
    }
 return 0;
}