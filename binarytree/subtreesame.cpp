
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
   bool isidentical(TreeNode* p, TreeNode* q)
   {
    if(p==NULL || q==NULL)
    {
        return p==q;
    }
    return p->val==q->val && isidentical(p->left,q->left) && isidentical(p->right,q->right);
   }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      if(root==NULL || subRoot==NULL)
    {
        return root==subRoot;
    }  
 if (root->val ==subRoot->val && isidentical(root, subRoot))
 {
    return true;
 }
 return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
   }
int main()
{
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    p->right->left = new TreeNode(4);
    p->right->right = new TreeNode(5);

    // TreeNode* q = new TreeNode(1); //true
    // q->left = new TreeNode(2);
    // q->right = new TreeNode(3);
    // q->right->left = new TreeNode(4);
    // q->right->right = new TreeNode(5);
    TreeNode* q = new TreeNode(1); //false
    q->left = new TreeNode(2);
    q->right = new TreeNode(5);
    q->right->left = new TreeNode(4);
    q->right->right = new TreeNode(5);
   cout<<isSubtree(p,q);
    return 0;
}