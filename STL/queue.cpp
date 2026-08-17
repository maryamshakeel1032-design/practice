#include <iostream>
#include <queue>
using namespace std;

int main()
{
   queue<int> d; //push,emplace,front ,pop o(1)
   d.push(1);
   d.push(2);
   d.push(3);
   cout<<"Queue size : "<<d.size()<<endl;
    cout<<"Front : "<<d.front()<<endl;
   while(!d.empty()) 
   {
    cout<<d.front()<<endl;
    d.pop(); //delete from front
   }
   cout<<endl;
    return 0;
}