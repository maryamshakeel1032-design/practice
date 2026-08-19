#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ 
    // char s[]={'h','e','l','l','o'};
    // int st=0,end=s.size()-1;
    //     while(st<end)
    //     {
    //         swap(s[st],s[end]);
    //         st++;
    //         end--;
    //     }

        string str="apna college"; //better as string
        reverse(str.begin(),str.end());
         cout<<str<<endl;
    return 0;
}