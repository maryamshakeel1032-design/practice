#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;
class Graph
{
   int V;
   list<int> *l;

public:
   Graph(int V)
   {
      this->V = V;
      l = new list<int>[V];
   }
   void edge(int u, int v)
   {
      l[u].push_back(v); // only directed graph
   }

   //DFS
   void dfs(int curr,vector<bool>& vis,stack<int>& s) //TC:o(V+E)
   {
     vis[curr]=true;
     for(int v:l[curr])
     {
        if(!vis[v])
        {
            dfs(v,vis,s);
        }
     }
     s.push(curr);
   }
   void toposort()
   {
    vector<bool> vis(V,false);
    stack<int> s;
    for(int i=0;i<V;i++)
    {
      if(!vis[i])
      {
        dfs(i,vis,s);
      }
    }
    while(s.size()>0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
   }
};
int main()
{
   Graph g(6);
   g.edge(5,0);
   g.edge(4,0);
   g.edge(5,2);
   g.edge(4,1);
   g.edge(2,3);
   g.edge(3,1);
   g.toposort();
   return 0;
}