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
 ListNode* middleNode(ListNode* head) {    //tc:o(n) sc:o(1)
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL &&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(5);
    head->next->next = new ListNode(3);
    ListNode* middle = middleNode(head);
    cout << middle->val;
    return 0;
}