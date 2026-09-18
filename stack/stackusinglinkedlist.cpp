#include <iostream>
#include <list>
using namespace std;
class stack{
list<int> ll;
public:
void push(int val) //o(1)
{   
    ll.push_front(val);
}
void pop() //o(1)
{
    ll.pop_front();
}
int top() //o(1)
{
return ll.front();    
}
bool empty() //o(1)
{
    return ll.size()==0;
}
};
int main()
{  
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<endl;
    return 0;
}