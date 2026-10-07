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
void inorder(Node* root,vector<int>& arr)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
Node* bulidBSTfromsorted(vector<int> arr,int st,int end)
{
    if(st>end)
    {
        return NULL;
    }
    int mid=st+(end-st)/2;
    Node* root=new Node(arr[mid]);
    root->left=bulidBSTfromsorted(arr,st,mid-1);
    root->right=bulidBSTfromsorted(arr,mid+1,end);
    return root;
}
Node* merge(Node* root1,Node* root2) //tc:o(m+n)
{
vector<int> arr1;
vector<int> arr2;
inorder(root1,arr1);
inorder(root2,arr2);
vector<int> temp;  //final BST =sorted
int i=0;
int j=0;
while(i<arr1.size() && j<arr2.size())
{
    if(arr1[i]<arr2[j])
    {
        temp.push_back(arr1[i++]);
    }
    else
    {
      temp.push_back(arr2[j++]);
    }
}
 while(i<arr1.size())
    {
      temp.push_back(arr1[i++]);
    }
     while(j<arr2.size())
    {
      temp.push_back(arr2[j++]);
    }
    return bulidBSTfromsorted(temp,0,temp.size()-1);//sorted,st,end
}
int main()
{  
    vector<int> arr1={8,2,1,10};
    vector<int> arr2={5,3,0};
    Node* root1=bulidbst(arr1);
    Node* root2=bulidbst(arr2);
    Node* root=merge(root1,root2);
    vector<int> seq;
    inorder(root,seq);
    for(int val:seq)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}