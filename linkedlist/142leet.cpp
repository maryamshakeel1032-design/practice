#include <iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
  ListNode *detectCycle(ListNode *head) { 
        ListNode* slow=head;
        ListNode* fast=head;
        bool iscycle=false;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                iscycle=true;
                break;
            }
        }
        if(!iscycle)
        {
            return NULL;
        }
       slow = head;
       while(slow!=fast)
       {
        slow=slow->next;
        fast=fast->next;
       }
       ListNode* prev=slow;

while(prev->next != slow)
{
    prev = prev->next;
}
       prev->next = NULL; //remove cycle
       return slow;
    }
int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(5);
    head->next->next = new ListNode(3);
    head->next->next->next = head->next;

    ListNode* middle = detectCycle(head);

    if(middle != NULL)
        cout << "Cycle starts at: " << middle->val;
    else
        cout << "No cycle";

    return 0;
}
