#include <iostream>
using namespace std;
 int reverse(int x) {
       int revnum=0;
       while(x!=0)
       { 
         int digit=x%10;
         if(revnum>INT64_MAX/10 || revnum<INT64_MIN/10)
         {
            return 0;
         }
        revnum=(revnum*10)+digit;
        x=x/10;
       } 
       return revnum;
    }
int main()
{
  cout<< reverse(4537)<<endl;
    return 0;
}