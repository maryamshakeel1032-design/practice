#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{   
//    stack<pair<int,int>> s;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//      if(s.empty())
//      {
//         s.push({val,val});
//      }
//      else
//      {
//         int minval=min(val,s.top().second);
//         s.push({val,minval});
//      }
//     }
    
//     void pop() {
//         s.pop();
//     }
    
//     int top() {
//       return  s.top().first; 
//     }
    
//     int getMin() {
//       return  s.top().second; 
//     }


stack<long long int> s;
long long int minval;
    MinStack() {
        
    }
    
    void push(int val) {
     if(s.empty())
     {
        s.push(val);
        minval=val;
     }
     else
     {
        if(val<minval)
        {
            s.push((long long)2*val-minval);
            minval=val;
        }
        else
        {
            s.push(val);
        }
     }
    }
    
    void pop() {
        if(s.top()<minval)
        {
            minval=2*minval-s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top()<minval)
        {
            return minval;
        }
      return  s.top(); 
    }
    
    int getMin() {
      return  minval; 
    }
    return 0;
}