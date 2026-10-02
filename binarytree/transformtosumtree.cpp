#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
   int  data;
   Node* left;
   Node* right;
   Node(int val)
   {
    data=val;
    left=right=NULL;
   }
};
static int idx=-1;
Node* buildTree(vector<int> preorder)  // tc:o(n) 
{
  idx++;
  if(preorder[idx]==-1)
  {
    return NULL;
  }
  Node* root=new Node(preorder[idx]);
  root->left=buildTree(preorder); //Left
  root->right=buildTree(preorder); //Right
  return root;
}
//PreOrder
void preOrder(Node* root)  //  recursive tc:o(n)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
// Transform to Sum Tree
int sum(Node* root) //tc:o(n) 
{
   if(root==NULL)
  {
    return 0;
  }
  int leftsum=sum(root->left);
  int rightsum=sum(root->right);
  root->data+=leftsum+rightsum;
  return root->data;
}
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    cout<<"Before conversion.";
    preOrder(root);
    cout<<endl;
    sum(root);
    cout<<"After conversion.";
    preOrder(root);
    cout<<endl;
    return 0;
}