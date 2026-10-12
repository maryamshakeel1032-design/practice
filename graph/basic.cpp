#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Graph
{
 int V;
 list<int> *l;//int *arr->(dynamic array)
 public:
 Graph(int V)
 {
 this->V=V;
 l=new list<int> [V]; //arr=new int[V]
 }
 void edge(int u,int v)
 {
    l[u].push_back(v);
    l[v].push_back(u);
 }
 void print()
 {
    for(int i=0;i<V;i++)
    {
        cout<<i<<":";
        for(int neigh:l[i])
        {
            cout<<neigh<<" ";
        }
        cout<<endl;
    }
 }
};
int main()
{
    Graph g(5);
    g.edge(0,1);
    g.edge(1,2);
    g.edge(1,3);
    g.edge(2,3);
    g.edge(2,4);
    g.print();
    return 0;
}