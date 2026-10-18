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
    bool iscycledfs(int src, vector<bool> &vis, vector<bool> &recpath)
    {
        vis[src] = true;
        recpath[src] = true;
        for (int v : l[src])
        {
            if (!vis[v])
            {
                if (iscycledfs(v, vis, recpath))
                {
                    return true;
                }
            }
            else if (recpath[v])
            {
                return true;
            }
        }
        recpath[src] = false;
        return false;
    }
    bool canFinish()
    {
        vector<bool> vis(V, false);
        vector<bool> recpath(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (iscycledfs(i, vis, recpath))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    Graph g(4);
    g.edge(1, 0);
    g.edge(2,0);
    g.edge(3,1);
    g.edge(3,2);
    cout << g.canFinish();
    return 0;
}