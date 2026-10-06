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
int prevorder=0;
    int kthSmallest(Node* root, int k) { //tc:o(n)
      if(root==NULL)
      {
        return -1;
      }  
      if(root->left !=NULL) //left
      {
       int leftans=kthSmallest(root->left,k);
        if(leftans!=-1)
        {
            return leftans;
        }
      }
      if(prevorder+1==k) //root
      {
        return root->data;
      }
      prevorder=prevorder+1;
      if(root->right!=NULL) //right
      {
       int rightans=kthSmallest(root->right,k);
        if(rightans!=-1)
        {
            return rightans;
        } 
      }
      return -1;
    }
int main()
{  
    Node* root=new Node(5);
     root->left=new Node(3);
     root->right=new Node(6);
     root->left->left=new Node(2);
     root->left->right=new Node(4);
     root->left->left->left=new Node(1);
     cout<<kthSmallest(root,4);
    return 0;
}
