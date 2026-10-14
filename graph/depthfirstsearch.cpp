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
    // DFS traversal
    void dfshelper(int u, vector<bool>& vis)
    {
        cout << u << " ";
        vis[u] = true;
        for (int v : l[u])
        {
            if (!vis[v])
            {
                dfshelper(v, vis);
            }
        }
    }
    void dfs()
    {
        int src = 6;
        vector<bool> vis(V,false);
        //for discontinues graph
        // for(int i=0;i<V;i++)
        // {
        //     if(!vis[i])
        //     {
        //         dfshelper(i,vis);
        //     }
        // }
        dfshelper(src,vis);
    }
};
int main()
{
    Graph g(10);
    g.edge(6, 5);
    g.edge(5, 7);
    g.edge(7, 8);
    g.edge(7, 9);
    g.edge(8, 9);
    // g.edge(0,1);
    // g.edge(1,2);
    // g.edge(1,3);
    // g.edge(2,4);
    g.dfs();
    return 0;
}