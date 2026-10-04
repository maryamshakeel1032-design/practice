#include <iostream>
#include <vector>
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
Node* insert(Node* root,int val) //insert one node
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val < root->data)
    {
        root->left=insert(root->left,val);
    }
    else 
    {
       root->right=insert(root->right,val); 
    }
    return root;
} 
Node* bulidbst(vector<int> arr) //bulid whole tree
{
    Node* root=NULL;
    for(int val:arr)
    {
        root=insert(root,val);
    }
    return root;
}
Node* helper(vector<int>& nums,int st,int end)
    {
      if(st>end)
      {
        return NULL;
      }
      int mid=st+(end-st)/2;
      Node* root=new  Node(nums[mid]);
      root->left=helper(nums,st,mid-1);
      root->right=helper(nums,mid+1,end);
      return root;
    }
Node* sortedArrayToBST(vector<int>& nums) { //tc:o(n)
      return helper(nums,0,nums.size()-1);  
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{  
    vector<int> nums={-10,-3,0,5,9};
    Node* root=bulidbst(nums);
    inorder(root);
    cout<<endl;
    Node* balancedroot=sortedArrayToBST(nums);
    inorder(balancedroot);
    cout<<endl;
    return 0;
}
