#include <iostream>
using namespace std;
bool isalphameric(char ch)
{
    if(ch>='0' && ch <='9'  || (tolower(ch)>='a' && tolower(ch)<='z'))
    {
        return true;
    }
    return false;
}
    bool ispalindrome(string s) //o(n) ,isalnum() bulidin function  in c++
    { 
        int st=0,end=s.size()-1;
        while(st<end)
        {
            if(!isalphameric(s[st]) )
            {st++;continue;}
             if(!isalphameric(s[end]) )
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