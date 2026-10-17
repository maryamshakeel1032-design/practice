#include <iostream>
#include <vector>
#include <list>
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
   // cycle detection
   bool iscycledirdfs(int curr, vector<bool> &vis, vector<bool> &recpath) // tc:o(V+E)
   {
      vis[curr] = true;
      recpath[curr] = true;
      for (int v : l[curr])
      {
         if (!vis[v])
         {
            if (iscycledirdfs(v, vis, recpath))
            {
               return true;
            }
         }
         else if (recpath[v])
         {
            return true;
         }
      }
      recpath[curr] = false;
      return false;
   }
   bool iscycle()
   {
      vector<bool> vis(V, false);
      vector<bool> recpath(V, false);
      for (int i = 0; i < V; i++)
      {
         if (!vis[i])
         {
            if (iscycledirdfs(i, vis, recpath))
            {
               return true;
            }
         }
      }
      return false;
   }
};
int main()
{
   Graph g(4);
   g.edge(1, 0);
   g.edge(0, 2);
   g.edge(2, 3);
   g.edge(3, 0);
   cout << g.iscycle();
   return 0;
}