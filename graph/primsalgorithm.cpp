#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <climits>
using namespace std;
class  Edge
{
 public:
 int v;
 int wt;
 Edge(int v,int wt)
 {
    this->v=v;
    this->wt=wt;
 }
};
int printMST(int V,vector<vector<pair<int,int>>> g)
{
vector<bool> mst(V,false);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
pq.push({0,0}); //{wt,vertex}
int mstcost=0;
while(pq.size()>0)
{
    auto p=pq.top();
    int wt=p.first;
    int u=p.second;
    pq.pop();
    if(!mst[u])
    {
        mst[u]=true;
        mstcost+=wt;
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i].first;
            int w=g[u][i].second;
             if(!mst[v])
             {
                pq.push({w,v});
             }
        }
    }
}
return mstcost;
}
int main() 
{
    int V=4;
    vector<vector<pair<int,int>>> g(V);
    g[0].push_back({1,10});
    g[1].push_back({0,10});

    g[0].push_back({3,30});
    g[3].push_back({0,30});

    g[0].push_back({2,15});
    g[2].push_back({0,15});

    g[1].push_back({3,40});
    g[3].push_back({1,40});

    g[2].push_back({3,50});
    g[3].push_back({2,50});
    cout<<"Minimum cost of MST =" <<printMST(V,g);
   return 0;
}
