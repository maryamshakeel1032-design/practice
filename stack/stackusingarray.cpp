#include <iostream>
using namespace std;
class stack{
int array[5]={1,2,3,4,5};
int topidx=-1;
public:
void push(int val)//o(1)
{   
    topidx++;
    array[topidx]=val;
}
void pop()//o(1)
{
    topidx--;
}
int top()//o(1)
{
return array[topidx];    //[topidx] index
}
bool empty()//o(1)
{
    return topidx==-1;
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