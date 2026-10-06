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
Node* lowestCommonAncestor(Node* root,Node* p,Node* q) { //tc:o(height) or in balanced BST o(logn)
       if(root==NULL)
       {
        return NULL;
       } 
       if(root->data > p->data && root->data > q->data) //left subtree
       {
        return  lowestCommonAncestor(root->left,p,q);
       }
       else if(root->data < p->data && root->data < q->data) //right subtree
       {
        return lowestCommonAncestor(root->right,p,q);
       }
       else //root itself is LCA
       {
        return root;
       }
    }
int main()
{  
    Node* root=new Node(6);
     root->left=new Node(2);
     root->right=new Node(8);
     root->left->left=new Node(0);
     root->left->right=new Node(4);
     root->left->right->left=new Node(3);
     root->left->right->right=new Node(5);
     root->right->left=new Node(7);
     root->right->right=new Node(9);
     Node* p=root->left;
     Node* q=root->right;
     Node* ans=lowestCommonAncestor(root,p,q);
     cout<<ans->data;
    return 0;
}
