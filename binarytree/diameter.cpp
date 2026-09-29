#include <iostream>
#include <vector>
using namespace std;
 struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
   int height(TreeNode* root)  //o(n)
{
    if(root==NULL)
    {
        return 0;
    }
   int leftht=height(root->left);
   int rightht=height(root->right);
   return max(leftht,rightht)+1; 
}
    int diameterOfBinaryTree(TreeNode* root) { //tc:o(n*n) second n for height function
        if(root==NULL)
        {
            return 0;
        }
       int leftdiam=diameterOfBinaryTree(root->left); 
       int rightdiam=diameterOfBinaryTree(root->right);
       int currdiam=height(root->left)+height(root->right);
        return max(currdiam,max(leftdiam,rightdiam)); 
    }
int main()
{
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    p->right->left = new TreeNode(4);
    p->right->right = new TreeNode(5);    
   cout<<diameterOfBinaryTree(p);
    return 0;
}