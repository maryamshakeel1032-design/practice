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
//InOrder
void inOrder(Node* root)  //  recursive  tc:o(n)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
//PostOrder
void postOrder(Node* root)  //  recursive  tc:o(n)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
//LevelOrder
void levelOrder(Node* root) // iterative  tc:o(n)
{ 
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(q.size()>0)
   {
    Node* curr=q.front();
    q.pop();
    if(curr==NULL)
    {
        if(!q.empty())
        {
    cout<<endl;
    q.push(NULL);
    continue;
        }
        else  //all traversed
        {
          break; 
        }
    }
    cout<<curr->data<<" ";
    if(curr->left!=NULL)
    {
        q.push(curr->left);
    }
      if(curr->right!=NULL)
    {
        q.push(curr->right);
    }
   }
   cout<<endl;
}
//Height
int height(Node* root) //tc:o(n) as it is similar to PostOrder
{
    if(root==NULL)
    {
        return 0;
    }
   int leftht=height(root->left);
   int rightht=height(root->right);
   return max(leftht,rightht)+1; //1=root
}
//Count
int count(Node* root) //tc:o(n) as it is similar to PostOrder
{
  if(root==NULL)
  {
    return 0;
  }
  int leftcount=count(root->left);
  int rightcount=count(root->right);
  return leftcount+rightcount+1; //1=root
}
//Sum
int sum(Node* root) //tc:o(n) as it is similar to PostOrder
{
  if(root==NULL)
  {
    return 0;
  }
  int leftsum=sum(root->left);
  int rightsum=sum(root->right);
  return leftsum+rightsum+root->data; //1=root
}
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelOrder(root);
    cout<<"Height is:"<<height(root)<<endl;
    cout<<"Count is:"<<count(root)<<endl;
    cout<<"Sum is:"<<sum(root)<<endl;
    return 0;
}