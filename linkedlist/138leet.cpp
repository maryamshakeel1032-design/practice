#include <iostream>
#include <unordered_map>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};
Node* copyRandomList(Node* head) {
        if(head==NULL)
        {
            return NULL;
        }
        unordered_map<Node*,Node*> m;
        Node* newhead=new Node(head->val);
        Node* oldtemp=head->next;
        Node* newtemp=newhead;
        m[head]=newhead;
        while(oldtemp!=NULL)
        {
            Node* copynode=new Node(oldtemp->val);
            m[oldtemp]=copynode;
            newtemp->next=copynode;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        oldtemp=head;
        newtemp=newhead;
        while(oldtemp!=NULL)
        {   
            newtemp->random=m[oldtemp->random];
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        return newhead;
    }
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next;
    Node* newhead = copyRandomList(head);
    Node* temp = newhead;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}