#include <iostream>
#include <vector>
#include <list>
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

// Topological
    void topological(int src,vector<bool>& vis,stack<int>& s)
{
    vis[src]=true;


    for(int v:l[src])
    {
        if(!vis[v])
            {
              topological(v,vis,s);
            }
    }
    s.push(src);
}
//Core Logic
vector<int> findOrder() {
        vector<bool> vis(V,false);
        vector<bool> recpath(V,false);
        vector<int> ans;
        for(int i=0;i<V;i++)
       {
         if(!vis[i])
         {
            if(iscycledfs(i,vis,recpath))
            {
                return ans; //[]
            }
         }
        }
        //Topological Sort
        stack<int> s;
        vis.assign(V,false);

        for(int i=0;i<V;i++)
       {
         if(!vis[i])
         {
           topological(i,vis,s);
         }
        }

        while(s.size()>0)
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
int main()
{
    Graph g(4);
    g.edge(0,1);
    g.edge(0,2);
    g.edge(1,3);
    g.edge(2,3);
    vector<int> ans=g.findOrder();
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}