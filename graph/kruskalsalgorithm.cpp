#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Edge
{
public:
int u;
int v;
int wt;
Edge(int u,int v,int wt)
{
this->u=u;
this->v=v;
this->wt=wt;
}
//Comparator
bool operator<(const Edge &other) const
{
    return this->wt < other.wt; 
}
};
class Graph
{
public:
int V;
vector<Edge> edges;
vector<int> par,rank;
Graph(int V)
{
this->V=V;
for(int i=0;i<V;i++)
{
    par.push_back(i);
    rank.push_back(0);
}
}
void edge(int u,int v,int wt)
{
edges.push_back(Edge(u,v,wt));
}
int find(int x)
{
    if(par[x]==x)
    {
        return x;
    }
    return par[x]=find(par[x]); //path compression
} 
void   unionByRank(int a,int b) //union is keyword thus unionByRank
{
 int parA=find(a);
 int parB=find(b);
 if(parA==parB)
 {
    return ;
 } 
 if(rank[parA]==rank[parB])
 {
    par[parB]=parA;
    rank[parA]++;
 }
 else if (rank[parA]>rank[parB])
 {
    par[parB]=parA;
 }
 else
 {
   par[parA]=parB;
 }
} 
void kruskal() //tc://o(ElogE)
{
sort(edges.begin(),edges.end()); //o(ElogE)
int mstCost=0;
int count=0;
//vector<Edge> MST :forr tracking edges which were used
for(int i=0;i<edges.size() && count<V-1;i++)
{
    Edge e=edges[i];
    int parU=find(e.u);
    int parV=find(e.v);
    if(parU!=parV) //no cycle
    {
   unionByRank(e.u,e.v);
   mstCost+=e.wt;
   count++;
    }
}
cout<<"MST Cost:"<<mstCost<<endl;    
}
};
int main()
{
    Graph g(4);
    g.edge(0,1,10);
    g.edge(0,2,6);
    g.edge(0,3,5);
    g.edge(1,3,15);
    g.edge(2,3,4);
    g.kruskal();
    return 0;
}