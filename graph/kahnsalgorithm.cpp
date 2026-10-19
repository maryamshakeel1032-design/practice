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
   void toposort()   //tc:o(V+E)
   {
     vector<int> res;
     //calculate indegree
     vector<int> indeg(V,0);
     for(int u=0;u<V;u++)
     {
        for(int v:l[u])
        {
            indeg[v]++;
        }
     }
     //push in queue
     queue<int> q;
     for(int i=0;i<V;i++)
     {
        if(indeg[i]==0)
        {
            q.push(i);
        }
     }
     //BFS
     while(q.size()>0)
     {
        int curr=q.front();
        q.pop();
        res.push_back(curr);
        for(int v:l[curr])
        {
            indeg[v]--;
            if(indeg[v]==0)
            {
                q.push(v);
            }
        }
     }
     //result
     for(int val:res)
     {
        cout<<val<<" ";
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