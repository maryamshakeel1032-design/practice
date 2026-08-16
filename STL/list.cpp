#include <iostream>
#include <list>
using namespace std;

int main()
{
 list<int>  l={1,2,3,4,5}; //all functions availble of vector and also of front 
//  l.push_back(1);
// l.emplace_back(1);
//   l.push_back(2);
//    l.push_front(3);
//     l.push_front(5);
 
//      l.pop_back();  //2
//      l.pop_front(); //5
    for(int val:l)
    {
        cout<<val <<" ";
    }
    return 0;
}