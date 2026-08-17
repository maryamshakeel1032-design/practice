#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack<int> s; //push,top,pop o(1)
   s.push(1);
   s.push(2);
   s.push(3);
   stack<int> s2;
   swap(s,s2);
   cout<<"S's size : "<<s.size()<<endl;
   cout<<"S2's size : "<<s2.size()<<endl;
   cout<<"Top : "<<s.top()<<endl;
   while(!s.empty()) // result because sawped elemnts
   {
    cout<<s.top()<<endl;
    s.pop(); //delete from top
   }
   cout<<endl;
    return 0;
}