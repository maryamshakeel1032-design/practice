#include <iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class Circularlist{
     Node* head;
    Node* tail;
    public:
   Circularlist()
   {
    head=tail=NULL;
   }
   void insertathead(int val)
   { 
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
        tail->next=head;  //circular
    }
    else
    {
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
   } 
   void insertattail(int val)
   {
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
        tail->next=head;
    }
    else
    { 
        newnode->next=head;
      tail->next=newnode;
      tail=newnode;
    }
   }
   void print()
   {
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<"->";
    Node* temp=head->next;
    while(temp!=head)
    {
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<temp->data<<endl;
   }
   void deleteathead()
   {
    Node* temp=head;
    if(head==NULL)
    {
        return;
    }
    else if(head==tail)   //single node
    {
        delete head;
        head=tail=NULL;
    }
    else  //two or more
    {
      head=head->next;
      tail->next=head;
      temp->next=NULL;
      delete temp;
    }
   }
   void deleteattail()
   { 
    if(head==NULL)
    {
        return;
    }
    else if(head==tail)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
      Node* temp=tail;
    Node* prev=head;
    while(prev->next!=tail)
    {
        prev=prev->next;
    }
    tail=prev;
    tail->next=head;
    temp->next=NULL;
    delete temp;
    }
   }
};
int main()
{  Circularlist cll;
    cll.insertathead(1);
    cll.insertathead(2);
    cll.insertathead(3);
    cll.insertattail(1);
    cll.insertattail(2);
    cll.insertattail(3);
    cll.deleteathead();
    cll.deleteattail();
    cll.print();
    return 0;
}