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
vector<int> inorderTraversal(Node* root) //o(n)
{ 
    vector<int> ans;
    Node* curr=root;
  while(curr!=NULL)
  {
    if(curr->left==NULL)
    {
        ans.push_back(curr->data);
        curr=curr->right;
    }
    else
    {
      Node* ip=curr->left;
      while(ip->right!=NULL && ip->right!=curr)
      {
        ip=ip->right;
      }
      if(ip->right==NULL)
      {
        ip->right=curr; //create thread
        curr=curr->left;
      }
      else
      {
       ip->right=NULL; //delete thread
       ans.push_back(curr->data);
       curr=curr->right;
      }
    }
  }
 return ans;
}
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    vector<int> ans=inorderTraversal(root);
    for(auto val:ans)
    {
       cout<<val<<" ";
    }
    return 0;
}