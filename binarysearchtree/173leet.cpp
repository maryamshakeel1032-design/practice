#include <iostream>
#include <stack>
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
class BSTIterator {
public:
stack<Node*> s;
void storeleftnode(Node* root) // sc:o(h)
{
    while(root!=NULL)
    {
        s.push(root);
        root=root->left;
    }
}
    BSTIterator(Node* root) {
        storeleftnode(root);
    }
    
    int next() {  //tc:o(1)
      Node* ans=s.top();
      s.pop();
     storeleftnode(ans->right);
      return ans->data;
    }
    
    bool hasNext() {
       return s.size()>0; 
    }
};
int main()
{  
    Node* root=new Node(7);
     root->left=new Node(3);
     root->right=new Node(15);
     root->right->left=new Node(9);
     root->right->right=new Node(20);
     BSTIterator it(root);
     while(it.hasNext())
     {
        cout<<it.next()<<" ";
     }
    return 0;
}
