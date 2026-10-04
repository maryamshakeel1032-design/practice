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
bool search(Node* root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }
    if(key< root->data )
    {
        return search(root->left,key);
    }
    else
    {
      return search(root->right,key);
    }
}
Node* getis(Node* root) //is:inorderSuccessor:left most in right subTree , inorderPredeccessor:right most in left subTree
{
 while(root!=NULL && root->left!=NULL)
 {
    root=root->left;
 }
 return root;
}
Node* delnode(Node* root,int key)//Key=val to delete
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(key < root->data)
    {
    root->left=delnode(root->left,key);
    }
     else if(key > root->data)
    {
    root->right=delnode(root->right,key);
    }
    else //key==root
    {
        if(root->left==NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else //2 child
        {
            Node* is=getis(root->right);
            root->data=is->data;
            root->right=delnode(root->right,is->data);
        }
    }
    return root;
}
int main()
{  
    vector<int> arr={3,2,1,5,6,4};
    Node* root=bulidbst(arr);
    inorder(root);
    cout<<endl;
    cout<<search(root,5)<<endl;
    cout<<search(root,8)<<endl;
    cout<<"Before:";
    inorder(root);
    cout<<endl;
    delnode(root,6);
    cout<<"After";
    inorder(root);
    cout<<endl;
    delnode(root,2);
    cout<<"After";
    inorder(root);
    cout<<endl;
    delnode(root,5);
    cout<<"After";
    inorder(root);
    cout<<endl;
    return 0;
}
