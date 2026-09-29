#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
  vector<int> topView(Node *root) {
        vector<int> ans;
        queue<pair<Node*,int>> q; //(node,HD)
             map<int,int> m;   //Horizontal Distance,node val
             q.push({root,0});
             if(root == NULL) return ans;
             while(q.size() > 0)
             {
               Node* curr=q.front().first;
               int currHD=q.front().second;  
               q.pop();
               if(m.find(currHD) == m.end())
               {
                  m[currHD]=curr->data;
                  ans.push_back(curr->data);
               }
               if(curr->left!=NULL)
               {
                  q.push({curr->left,currHD-1});
               }
                if(curr->right!=NULL)
               {
                  q.push({curr->right,currHD+1});
               }
             }
             return ans;
    }
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    topView(root);
    return 0;
}