#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
public:
stack<int> s1;
stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) { //o(n)
      while(!s1.empty())
      {
        s2.push(s1.top());
        s1.pop();
      } 
      s1.push(x);
        while(!s2.empty())
      {
        s1.push(s2.top());
        s2.pop();
      } 
    }
    
    int pop() { //o(1)
       int ans=s1.top();
       s1.pop();
       return ans;
    }
    
    int peek() { //O(1)
       return s1.top(); 
    }
    
    bool empty() { //(1)
        return s1.empty();
    }
};
int main()
{ 
    return 0;
}