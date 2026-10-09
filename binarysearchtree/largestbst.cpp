#include <iostream>
#include <vector>
#include <climits>
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
class INFO
{
public:
  int min,max,sz;
  INFO(int mi,int ma,int size)
  {
    min=mi;
    max=ma;
    sz=size;
  }
};
INFO helper(Node* root) //tc:o(n) as PreOrder=> left,right,root
{
 if(root==NULL)
 {
    return INFO(INT_MAX,INT_MIN,0);
 }
 INFO left=helper(root->left);
 INFO right=helper(root->right);
 if(root->data >left.max && root->data < right.min) //valid BST
 {
    int currmin=min(root->data,left.min);
    int currmax=max(root->data,right.max);
    int currsz=left.sz+right.sz+1;
    return INFO(currmin,currmax,currsz);
 }
 return INFO(INT_MIN,INT_MAX,max(left.sz,right.sz)); //Invalid BST
}
int largestBST(Node* root)
{
    INFO info=helper(root);
    return info.sz; //max BST size
}
int main()
{  
    Node* root=new Node(10);
     root->left=new Node(5);
     root->right=new Node(15);
     root->left->left=new Node(1);
     root->left->right=new Node(8);
     root->right->right=new Node(50);
     cout<<"Largest BST:"<<largestBST(root);
    return 0;
}
