#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
class flattenlist{
     Node* head;
    Node* tail;
    public:
   flattenlist()
   {
    head=tail=NULL;
   }
    Node* flatten(Node* head) {
       if(head==NULL)
       {
        return head;
       } 
       Node* curr=head;
       while(curr!=NULL)
       {
        if(curr->child!=NULL)
        {
            Node* next=curr->next;  //flatten
            curr->next=flatten(curr->child);
            curr->next->prev=curr;
            curr->child=NULL;
            while(curr->next!=NULL) //tail
            {
                curr=curr->next;
            }
            if(next!=NULL)  //connect with tail
            {
                curr->next=next;
                next->prev=curr;
            }
        }
        curr=curr->next;
       }
       return head;
    }
};
int main()
{   flattenlist fll;
    Node* head = new Node();
    head->val = 1;
    head->prev = NULL;
    head->next = new Node();
    head->next->val = 2;
    head->next->prev = head;
    head->next->next = NULL;
    head->child = NULL;
    head = fll.flatten(head);
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << "<=>";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}