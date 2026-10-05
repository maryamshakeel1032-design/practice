#include <iostream>
#include <vector>
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
bool helper(Node* root,Node* min,Node* max) //tc:o(n)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL && root->data<=min->data)
    {
        return false;
    }
    if(max!=NULL && root->data>=max->data)
    {
        return false;
    }
    return helper(root->left,min,root) && helper(root->right,root,max);
}
    bool isValidBST(Node* root) {
      return helper(root,NULL,NULL);  
    }
int main()
{  
    Node* root=new Node(5);
     root->left=new Node(1);
     root->right=new Node(8);
     root->right->left=new Node(7);
     root->right->right=new Node(9);
    cout<<isValidBST(root);
    return 0;
}
