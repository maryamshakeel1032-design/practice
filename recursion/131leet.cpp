#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ispalindrome(string part)
{
     string s2=part;
     reverse(s2.begin(),s2.end());
     return part==s2;
}
void helper(string s,vector<string>& partition,vector<vector<string>>& ans)
{  
    if(s.size()==0)
    {
        ans.push_back(partition);
        return;
    }
    for(int i=0;i<s.size();i++)
    { 
        string part=s.substr(0,i+1);
        if(ispalindrome(part))
        { 
            partition.push_back(part);
            helper(s.substr(i+1),partition,ans);
            partition.pop_back(); //backtrack
        }
    }
}
    vector<vector<string>> partition(string s) {  //o(n*(2*n))
       vector<vector<string>> ans;
        vector<string> partition;
         helper(s,partition,ans);
         return ans;
    }
     int main()
{  
    string s="aab";
 vector<vector<string>> ans=partition(s);
 for(vector<string> combin : ans)
{
    for(string val : combin)
    {
        cout << val << " ";
    }
    cout << endl;
}
 return 0;
}