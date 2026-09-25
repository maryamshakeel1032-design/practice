#include <iostream>
using namespace std;
class CircularQueue
{   int* arr;
    int arrsize,cap;
    int f,r;
public:
CircularQueue(int size)
{
    cap=size;
    arr=new int[cap];
    arrsize=0;
    f=0;
    r=-1;
}
void push(int data) //o(1)
{
    if(arrsize==cap)
    {
        cout<<"Circular Queue is full.";
        return;
    }
   r=(r+1)%cap;
   arr[r]=data;
   arrsize++;
}
void pop() //o(1)
{
    if(empty())
    {
        cout<<"Circular Queue is empty.";
        return ;
    }
    f=(f+1)%cap;
    arrsize--;
}
int front() //o(1)
{
    if(empty())
    {
        cout<<"Circular Queue is empty.";
        return -1;
    }
   return arr[f];
}
bool empty() //o(1)
{
    return arrsize==0;
}
void printarr()
{
    for(int i=0;i<cap;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main()
{ 
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    // cq.printarr();
      while(!cq.empty())
    {
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;
    return 0;
}