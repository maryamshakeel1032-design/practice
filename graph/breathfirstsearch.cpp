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
 q.push(0);
 vis[0]=true;
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
    Graph g(5);
    g.edge(0,1);
    g.edge(1,2);
    g.edge(1,3);
    g.edge(2,3);
    g.edge(2,4);
    g.bfs();
    return 0;
}