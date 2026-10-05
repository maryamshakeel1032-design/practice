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
 Node* pre= NULL;
int minDiffInBST(Node* root) { //tc:o(n)
      if(root==NULL)
      {
        return INT_MAX;
      } 
      int ans=INT_MAX; 
      if(root->left !=NULL) //left
      {
        int leftmin=minDiffInBST(root->left);
        ans=min(ans,leftmin);
      }
      if(pre!=NULL)  //current minimum
      {
        ans=min(ans,root->data - pre->data);
      }
      pre=root;
      if(root->right !=NULL) //right
      {
        int rightmin=minDiffInBST(root->right);
        ans=min(ans,rightmin);
      }
      return ans;
    }
int main()
{  
    Node* root=new Node(83);
     root->left=new Node(62);
     root->right=new Node(88);
     root->left->left=new Node(42);
     root->left->right=new Node(82);
     root->left->left->right=new Node(52);
     cout<<minDiffInBST(root);
    return 0;
}
