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
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) { //tc:o(n) sc:o(n)
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data ==p->data || root->data==q->data)
        // better if(rot==p || root==q)
        {
            return root;
        }
       Node* leftLCA=lowestCommonAncestor(root->left, p,q); 
       Node* rightLCA=lowestCommonAncestor(root->right, p,q);
        if(leftLCA && rightLCA) //valid
        {
            return root;
        }
        else if (leftLCA !=NULL) //leftvalid
        {
            return leftLCA;
        }
        else //rightvalid
        {
            return rightLCA;
        }
    }
int main()
{
    vector<int> preorder={1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    Node* p = root->left;
    Node* q = root->right->right;
    Node* LCA = lowestCommonAncestor(root, p, q);
    cout << LCA->data;
    return 0;
}