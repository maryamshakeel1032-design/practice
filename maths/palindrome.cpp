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
    bool isPalindrome(int x) {
        int rev=reverse(x);
        if(x<0)  return false;
       if(x==rev)
       {
        return true;
       } 
       else  return false;
    }
int main()
{
  cout<<isPalindrome(353) <<endl;
   cout<<isPalindrome(135631) <<endl;
    return 0;
}