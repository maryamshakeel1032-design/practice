#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class LRUCache {
public:
class Node
{
    public:
    int key,val;
    Node* prev;
    Node* next;
    Node(int k,int v)
    {
         key=k;
         val=v;
        prev=next=NULL;
    }
};
Node* head=new Node(-1,-1);
Node* tail=new Node(-1,-1);
unordered_map<int,Node*> m;
int limit;
  void  addNode(Node* newNode) //o(1)
    {
        Node* oldNext=head->next;
        head->next=newNode;
        oldNext->prev=newNode;
        newNode->next=oldNext;
        newNode->prev=head;
    }
    void deleteNode(Node* oldNode) //o(1)
    {
        Node* oldprev=oldNode->prev;
        Node* oldNext=oldNode->next;
        oldprev->next=oldNext;
        oldNext->prev=oldprev;
    }
    LRUCache(int capacity) {
      limit=capacity;
      head->next=tail;
      tail->prev=head;  
    }
    int get(int key) {  //o(1)
        if(m.find(key)==m.end())
        {
            return -1;
        }
         Node* ansNode=m[key];
         int ans=ansNode->val;
         m.erase(key);
         deleteNode(ansNode);
         addNode(ansNode);
         m[key]=ansNode;
         return ans;
}
    void put(int key, int value) {  //o(1)
        if(m.find(key)!=m.end()) //already exist
        {
            Node* oldNode=m[key];
            deleteNode(oldNode);
            m.erase(key);
        }
        if(m.size()==limit) //delete LRU
        {
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        Node* newNode=new Node(key,value);
        addNode(newNode);
        m[key]=newNode;
    }
};
int main()
{
    LRUCache cache=2;
    cache.put(1,1);
    cache.put(2,2);
    cout<<cache.get(1)<<endl;
    cache.put(3,3);
    cout<<cache.get(2)<<endl;
    cache.put(4,4);
    cout<<cache.get(1)<<endl;
    cout<<cache.get(3)<<endl;
    cout<<cache.get(4)<<endl;
    return 0;
}