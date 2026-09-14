#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    void push_front(int val) // o(1)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val) // o(1)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = NULL;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front() // o(1)
    {
        if (head == NULL)
        {
            cout << "LL is empty.";
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back() // o(n) because of loop
    {
        if (head == NULL)
        {
            cout << "LL is empty";
            return;
        }
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val, int pos) // o(n)
    {
        if (pos < 0)
        {
            cout << "Invalid";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid";
                return;
            }
            temp = temp->next;
        }
        node *newnode = new node(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void printll() // o(n)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    int search(int key) // o(n)
    {
        node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};
int main()
{
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.push_back(4);
    // ll.pop_front();
    // ll.pop_back();
    ll.insert(4, 1);
    ll.printll();
    cout << ll.search(4) << endl;
    return 0;
}