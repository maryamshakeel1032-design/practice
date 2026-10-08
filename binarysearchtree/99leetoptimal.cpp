#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
   Node(int val)
   {
    data=val;
    left=right=NULL;
   }
};
Node* pre=NULL;
Node* first=NULL;
Node* second=NULL;
 void inorder(Node* root)    //tc:o(n) ,sc:o(1)
 {
      if(root==NULL)
    {
        return;
    }
while(root!=NULL)
{
 if(root->left==NULL)
    {
       if(pre!=NULL && root->data < pre->data)
    {
        if(first==NULL)
        {
            first=pre;
        }
        second=root;
    }
    pre=root;
    root=root->right;
    }
    else
    {
        Node* ip=root->left;
        while(ip->right!=NULL && ip->right!=root)
        {
            ip=ip->right;
        }
        if(ip->right==NULL)
        {
            ip->right=root;
            root=root->left;
        }
        else
        {
            if(pre!=NULL && root->data < pre->data)
    {
        if(first==NULL)
        {
            first=pre;
        }
        second=root;
    }
    pre=root;
    ip->right=NULL;
    root=root->right; 
        }
    }
}
}
void recoverTree(Node* root) {
      inorder(root);
      int temp=first->data;
      first->data=second->data;
      second->data=temp; 
}
void printInorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}    
int main()
{  
    Node* root=new Node(6);
     root->left=new Node(3);
     root->right=new Node(4);
     root->left->left=new Node(1);
     root->left->right=new Node(8);
     root->right->right=new Node(9);
     cout<<"Before:";
     printInorder(root);
     cout<<endl;
     recoverTree(root);
     cout<<"After:";
     printInorder(root);
    return 0;
}
