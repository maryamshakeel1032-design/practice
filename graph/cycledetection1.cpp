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
        this->V = V;
        l = new list<int>[V];
    }
    void edge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
bool iscycledetect(int src,int par,vector<bool>& vis) // tc:o(V+E)
{
  vis[src]=true;
  list<int> neighbor=l[src];
  for(int v:neighbor)
  {
    if(!vis[v])
    {
        if(iscycledetect(v,src,vis))
        {
            return true;
        }
    }
    else if (v!=par) //Back Edge
    {
       return true;
    }
  }
  return false;
}
    bool iscycle()
    {
     vector<bool> vis(V,false);
     for(int i=0;i<V;i++)
     {
        if(!vis[i])
        {
           if(iscycledetect(i,-1,vis))
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
    Graph g(5);
    g.edge(0,1);
    // g.edge(0,2);
    g.edge(0,3);
    g.edge(1,2);
    g.edge(3,4);
    cout<< g.iscycle();
    return 0;
}