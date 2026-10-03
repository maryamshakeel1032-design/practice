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
Node* nextright=NULL;
void flatten(Node* root) //tc:o(n)
{
    if(root==NULL)
    {
        return;
    }
   flatten(root->right);
   flatten(root->left);
   root->left=NULL;
   root->right=nextright;
   nextright=root;
}
void print(Node* root)
{
    while(root!=NULL)
{
    cout<<root->data<<" ";
    root=root->right;
}
}
int main()
{
    vector<int> preorder={1,2,3,-1,-1,4,-1,-1,5,-1,6,-1,-1};
    Node* root=buildTree(preorder);
    flatten(root);
    print(root);
    return 0;
}