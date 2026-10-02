#include <iostream>
#include <vector>
#include <queue>
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
//Max width of binarytree
int widthOfBinaryTree(Node* root) {  //tc:o(n) because to level order traversal
      queue<pair<Node*,unsigned long long>> q;
      q.push({root,0});
      int maxwidth=0;
      while(q.size()>0)
      {
        int currlevel=q.size();
        unsigned long long stidx=q.front().second;
        unsigned long long endidx=q.back().second;
        maxwidth=max(maxwidth,(int)((endidx-stidx)+1));  //currentidx=(endidx-stidx)+1
         for(int i=0;i<currlevel;i++)
      {
        auto curr=q.front();
        q.pop();
        if(curr.first->left)
        {
            q.push({curr.first->left,curr.second*2+1}); //idx=curr->first
        }
           if(curr.first->right)
        {
            q.push({curr.first->right,curr.second*2+2});
        }
      }
      } 
     return maxwidth;
    }
int main()
{
    vector<int> preorder={1,3,5,-1,-1,3,-1,-1,2,-1,9,-1,-1};
    Node* root=buildTree(preorder);
    cout<<"Before conversion.";
    preOrder(root);
    cout<<endl;
    cout<<widthOfBinaryTree(root);
    return 0;
}    