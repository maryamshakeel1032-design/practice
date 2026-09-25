#include <iostream>
using namespace std;
struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  ListNode* swapPairs(ListNode* head) {   //tc:o(n) sc:o(1)
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
       ListNode* first=head;
       ListNode* second=head->next;
       ListNode* prev=NULL;
       while(first!=NULL && second!=NULL)
       {
        ListNode* third=second->next;
        second->next=first;
        first->next=third;
        if(prev!=NULL)
        {
            prev->next=second;
        }
        else
        {
            head=second;
        }
        prev=first;
        first=third;
        if(third!=NULL)
        {
            second=third->next;
        }
        else 
        {
           second=NULL;
        }
       }
       return head;
    }
int main()
{  
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    head=swapPairs( head);
    ListNode* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->val<<"->";
      temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}