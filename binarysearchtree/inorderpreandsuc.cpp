#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *rightmostfromleftsubtree(Node *root)
{
    Node *ans;
    while (root != NULL)
    {
        ans = root;
        root = root->right;
    }
    return ans;
}
Node *leftmostfromrightsubtree(Node *root)
{
    Node *ans;
    while (root != NULL)
    {
        ans = root;
        root = root->left;
    }
    return ans;
}
vector<int> inorderpreandsuc(Node *root, int key)
{
    Node *curr = root;
    Node *pre = NULL;
    Node *suc = NULL;
    while (curr != NULL)
    {
        if (key < curr->data)
        {
            suc = curr;
            curr = curr->left;
        }
        else if (key > curr->data)
        {
            pre = curr;
            curr = curr->right;
        }
        else // key==root->data
        {
            if (curr->left != NULL)
            {
                pre = rightmostfromleftsubtree(root->left);
            }
            if (curr->right != NULL)
            {
                suc = leftmostfromrightsubtree(root->right);
            }
            break;
        }
    }
    return {pre->data, suc->data};
}
int main()
{
    Node *root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(9);
    //   int key=7; //6,8
    //   int key=6; //5,7
    int key = 3; // 1,4
    vector<int> ans = inorderpreandsuc(root, key);
    cout << "Predecessor:" << ans[0] << endl;
    cout << "Successor:" << ans[1] << endl;
    return 0;
}
