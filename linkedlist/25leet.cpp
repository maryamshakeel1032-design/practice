#include <iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* reverseKGroup(ListNode* head, int k) {
       // if k exist
       ListNode* temp=head;
       int cnt=0;
       while(cnt<k)
       {
        if(temp==NULL)
        {
            return head;
        }
        temp=temp->next;
        cnt++;
       }
      // recursively call
       ListNode* prevnode=reverseKGroup(temp,k);
      //reverse
      temp=head;
      cnt=0;
      while(cnt<k)
      {
        ListNode* next=temp->next;
        temp->next=prevnode;
        prevnode=temp;
        temp=next;
        cnt++;
      }
      return prevnode;
    }
int main()
{  
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    int k=3;
    head=reverseKGroup(head,k);
    ListNode* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->val<<"->";
      temp=temp->next;
    }
    return 0;
}