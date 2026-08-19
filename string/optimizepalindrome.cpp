#include <iostream>
using namespace std;
bool ispalindrome(string s) //o(n) ,isalnum() bulidin function  in c++
    { 
        int st=0,end=s.size()-1;
        while(st<end)
        {
            if(!isalnum(s[st]) )
            {st++;continue;}
             if(!isalnum(s[end]) )
             {end--;continue;}
             if(tolower(s[st])!=tolower(s[end]))
             {
                return false;
             }
             st++;
             end--;
        }
        return true;
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