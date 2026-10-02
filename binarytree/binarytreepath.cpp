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
// Binary Tree Path
void allpaths(Node* root,string path,vector<string>& ans) //tc:o(n)
 {
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(path);
        return;
    }
    if(root->left)
    {
        allpaths(root->left,path+"->"+to_string(root->left->data),ans);

    }
     if(root->right)
    {
        allpaths(root->right,path+"->"+to_string(root->right->data),ans);
        
    }
 }
    vector<string> binaryTreePaths(Node* root) {
      vector<string> ans;
      string path=to_string(root->data);
       if(root == NULL) 
    {
        return ans;
    }
    allpaths(root,path,ans);
      return ans;
    }
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,-1};
    Node* root=buildTree(preorder);
    cout<<"Before conversion.";
    preOrder(root);
    cout<<endl;
    vector<string> ans=binaryTreePaths(root);
    for (auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}