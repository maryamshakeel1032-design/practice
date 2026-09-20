#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int largestRectangleArea(vector<int>& ht) { //tc:o(n)  sc:o(n)
        int n=ht.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> s;
       // right
        for(int i=n-1;i>=0;i--)
        {
            while(s.size()>0 && ht[s.top()]>=ht[i])
            {
                s.pop();
            }
            right[i]=s.empty()?n:s.top();
            s.push(i);
        }
       while(!s.empty())
        {
            s.pop();
        }
        //left 
      for(int i=0;i<n;i++)
        {
            while(s.size()>0 && ht[s.top()]>=ht[i])
            {
                s.pop();
            }
           left[i]=s.empty()?-1:s.top();
            s.push(i);
        }
       int ans=0;
       for(int i=0;i<n;i++)
       {
        int width=right[i]-left[i]-1;
        int currarea=ht[i]*width;
        ans=max(ans,currarea);
       }
       return ans;
    }
int main()
{   
    vector<int> ht={2,1,5,6,2,3};
    int ans=largestRectangleArea(ht);
    cout<<ans;
    cout<<endl;
    return 0;
}



