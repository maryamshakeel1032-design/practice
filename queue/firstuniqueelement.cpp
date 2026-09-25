#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;
    int firstUniqChar(string s) { //tc:o(n) sc:o(n)
    int n=s.size();
    unordered_map<char,int> m;
    queue<int> q; //viable(unique elements)
    for(int i=0;i<n;i++)
    {
     if(m.find(s[i])==m.end())
      {
         q.push(i);
      }
        m[s[i]]++;
     while(q.size()>0 && m[s[q.front()]]>1)
     {
       q.pop();
      } 
    }
    return  q.empty()? -1: q.front();
    }
int main()
{  
    string s="level";
    int idx=firstUniqChar(s);
    cout<<idx; 
    return 0;
}