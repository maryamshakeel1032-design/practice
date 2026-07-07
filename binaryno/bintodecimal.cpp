#include<iostream>
using namespace std;
int binarynum(int binnum)
{ int decimal=0;
    int power=1;
    while(binnum>0)
    {
        int rem=binnum%10;
        decimal+=(rem*power);
        binnum/=10;
        power*=2;
    }
    return decimal;
}
int main()
{     int i=1010;
        cout<<binarynum(i)<<endl;
    
 return 0;
}