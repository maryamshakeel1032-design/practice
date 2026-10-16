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
    bool iscyclebybfs(int src, vector<bool> &vis) // tc:o(V+E)
    {
        queue<pair<int, int>> q; // node,par
        q.push({src, -1});
        vis[src] = true;
        while (q.size() > 0)
        {
            int u = q.front().first;
            int par = q.front().second;
            q.pop();
            list<int> neighbor = l[u];
            for (int v : neighbor)
            {
                if (!vis[v])
                {
                    q.push({v, u});
                    vis[v] = true;
                }
                else if (v != par) // cycle
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool iscycle()
    {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
           if(!vis[i])
            { 
            if (iscyclebybfs(i, vis))
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
    g.edge(0, 1);
    //  g.edge(0, 2);
    g.edge(0, 3);
    g.edge(1, 2);
    g.edge(3, 4);
    cout << g.iscycle();
    return 0;
}