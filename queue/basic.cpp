#include <iostream>
using namespace std;
class Node
{ 
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class Queue
{
Node* head;
Node* tail;
public:
Queue()
{
    head=tail=NULL;
}
void push(int data) //o(1)
{
 Node* newNode=new Node(data);
 if(empty())
 {
    head=tail=newNode;
 }
 else
 {
  tail->next=newNode;
  tail=newNode;
 }
}
void pop() //o(1)
{
    if(empty())
    {
        cout<<"Queue is empty.";
        return ;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}
int front() //o(1)
{
    if(empty())
    {
        cout<<"Queue is empty.";
    }
    return head->data;
}
bool empty() //o(1)
{
    return head==NULL;
}
};
int main()
{ 
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}