#include <iostream>
#include <deque>
using namespace std;
int main()
{ 
    deque<int> dq; //double ended queue
    // dq.push_front(1);
    // dq.push_back(2);//1,2
    // dq.push_front(3);//3,1,2
    // dq.push_back(4);//3,1,2,4
    // while(!dq.empty())
    // {
    //     cout<<dq.front()<<" "<<dq.back()<<" ";
    //     dq.pop_back();
    // }     
    dq.push_back(1);
    dq.push_back(2);//1,2
    dq.push_back(3);//1,2,3
    dq.push_front(4);//4,1,2,3
    cout<<dq.front()<<" "<<dq.back()<<endl;
    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;  
    cout<<endl;
    return 0;
}