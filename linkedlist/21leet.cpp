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
 ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) { //o(n+m)
         if(head1==NULL || head2==NULL)  //basecase
         {
           return  head1==NULL ? head2:head1;
         }
         if(head1->val<=head2->val)  //case1
         {
            head1->next=mergeTwoLists(head1->next,head2);
            return head1;
         }
         else //case2
         {
            head2->next=mergeTwoLists(head1,head2->next);
            return head2;
         }
    }
int main()
{
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(3);
    head1->next->next = new ListNode(5);

    ListNode* head2 = new ListNode(2);
    head2->next = new ListNode(4);
    head2->next->next = new ListNode(6);

    ListNode* head = mergeTwoLists(head1, head2);

    ListNode* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}