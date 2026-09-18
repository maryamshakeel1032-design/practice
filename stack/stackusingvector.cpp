#include <iostream>
#include <vector>
using namespace std;
class stack{
vector<int> v;
public:
void push(int val) //o(1)
{
    v.push_back(val);
}
void pop()//o(1)
{
    v.pop_back();
}
int top() //o(1)
{
return v[v.size()-1];   //[v.size()-1] index 
}
bool empty()//o(1)
{
    return v.size()==0;
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