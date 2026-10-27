#include <iostream>
#include <vector>
using namespace std;
class Graph
{
public:
    vector<vector<pair<int, int>>> adj;
    int V;
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }
    void addEdge(int u, int v, int wt) // directed weighted Graph
    {
        adj[u].push_back({v, wt});
    }
    void floywarshall() // tc:o(V^3)
    {
        const int INF = 1e9; // 1 billion(here for infinity)
        vector<vector<int>> dist(V, vector<int>(V, INF));
        // src to src
        for (int i = 0; i < V; i++)
        {
            dist[i][i] = 0;
        }
        // direct path
        for (int u = 0; u < V; u++)
        {
            for (auto edge : adj[u])
            {
                int v = edge.first;
                int wt = edge.second;
                dist[u][v] = wt;
            }
        }
        // core logic
        for (int k = 0; k < V; k++)
        {
            for (int i = 0; i < V; i++)
            {
                for (int j = 0; j < V; j++)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        // print
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (dist[i][j] == INF)
                {
                    cout << "INF";
                }
                else
                {
                    cout << dist[i][j] << " ";
                }
            }
            cout << endl;
        }
        //check for negative weighted cycle
        for(int i=0;i<V;i++)
        {
            if(dist[i][i]<0)
            {
                cout<<"Negative weihted cycle exists.";
                break;
            }
        }
    }
};
int main()
{
    Graph graph(4);
    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 11);
    graph.addEdge(1, 2, 2);
    //graph.addEdge(1, 3, 8);
    graph.addEdge(3, 1, -8); //negative weighted cycle
    graph.addEdge(2, 3, 3);
    graph.floywarshall();
    return 0;
}