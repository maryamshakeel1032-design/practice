#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph
{
 int V;
 list<int> *l;
 public:
 Graph(int V)
 {
 this->V=V;
 l=new list<int> [V]; 
 }
 void edge(int u,int v)
 {
    l[u].push_back(v);
    l[v].push_back(u);
 }
 //BFS Traversal
void bfs()
{
 queue<int> q;
 vector<bool> vis(V,false);
 q.push(6);
 vis[6]=true;
 while(q.size()>0)
 {
   int u=q.front(); //u=source ,v=destination
   q.pop();
   cout<<u<<" ";
   for(int v:l[u])  //v=imediate neighbor
   {
    if(!vis[v])
    {
        vis[v]=true;
        q.push(v);
    }
   }
 }
 cout<<endl;
}
};
int main()
{
    Graph g(10);
    g.edge(6,5);
    g.edge(5,7);
    g.edge(7,8);
    g.edge(7,9);
    g.edge(8,9);
    g.bfs();
    return 0;
}