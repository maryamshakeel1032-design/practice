#include <iostream>
#include <queue>
using namespace std;

int main()
{
//    priority_queue<int> d; // for in priority manner,push,emplace,pop o(logn) and top o(1)
   priority_queue<int,vector<int>,greater<int>> d; // for reverse array
   d.push(5); 
   d.push(3);
   d.push(10);
   d.push(4);
   cout<<"Queue size : "<<d.size()<<endl;
    cout<<"Top : "<<d.top()<<endl;
   while(!d.empty()) 
   {
    cout<<d.top()<<endl; 
    d.pop(); //delete according to priority,o(logn)
   }
   cout<<endl;
    return 0;
}