#include <iostream>
using namespace std;
bool ispalindrome(string str)
{   int st=0,end=str.size()-1;
   while(st<end)
   {
     if(str[st]==str[end])
    {
   return true;
    }
    else return false;
   } 
   return false;
}
int main()
{   
    string str="racecar"; 
      cout<< ispalindrome(str)<<endl;
      string str2="madam"; 
      cout<< ispalindrome(str2)<<endl;
      string str3="apnacollege"; 
      cout<< ispalindrome(str3)<<endl;
    return 0;
}