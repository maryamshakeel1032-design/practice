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
Node* helper(vector<int>& preorder,int& i,int bound) //tc:o(n)
{
    if(i>=preorder.size() || preorder[i]>bound)
    {
        return NULL;
    }
    Node* root=new Node(preorder[i++]);
    root->left=helper(preorder,i,root->data);
    root->right=helper(preorder,i,bound);
    return root;
}
    Node* bstFromPreorder(vector<int>& preorder) {
        int i=0;
       return helper(preorder,i,INT_MAX); 
    }

int main()
{  
    vector<int> preorder={6,3,1,4,8,9};
    Node* root=bstFromPreorder(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
}
