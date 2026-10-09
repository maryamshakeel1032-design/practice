#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node* next;
   Node(int val)
   {
    data=val;
    left=right=next=NULL;
   }
};
 Node* connect(Node* root) {  //tc:o(n)
    if(root==NULL || root->left==NULL)
    {
        return root;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    Node* prev=NULL;
    while(q.size()>0)
    {
        Node* curr=q.front();
        q.pop();
        if(curr==NULL)
        {
          if(q.size()==0)
          {
            break;
          }
          q.push(NULL);
        }
        else
        {
           if(curr->left !=NULL)
           {
            q.push(curr->left);
           }
            if(curr->right !=NULL)
           {
            q.push(curr->right);
           }
           if(prev !=NULL)
           {
            prev->next=curr;
           }
        }
        prev=curr;
    }
    return root;
    }  
int main()
{  
    Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
     root->left->left=new Node(4);
     root->left->right=new Node(5);
      root->right->left=new Node(6);
     root->right->right=new Node(7);
     connect(root);
    //  cout<<root->data<<"->";
    //  cout<<root->left->data<<"->";
    //  cout<<root->right->data<<"->";
    //  cout<<root->left->left->data<<"->";
    //  cout<<root->left->right->data<<"->";
    //  cout<<root->right->left->data<<"->";
    //  cout<<root->right->right->data;
     Node* level=root;
     while (level != NULL)
    {
        Node* curr = level;

        while (curr != NULL)
        {
            cout << curr->data << " -> ";
            curr = curr->next;
        }

        cout << "NULL" << endl;
        level = level->left;
    }
    return 0;
}
