#include <iostream>
#include <vector>
using namespace std;
void dfs(int i,vector<vector<int>>& adj,vector<bool>& vis)
{
    vis[i]=true;
    for(int j=0;j<adj[i].size();j++)
    {
        if(adj[i][j]==1 && !vis[j])
        {
            dfs(j,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int numOfProvince=0;
        int n=isConnected.size(); //n*n size
        vector<bool> vis(n,false);
        for (int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,isConnected,vis);
                numOfProvince++;
            }
        }
        return numOfProvince;
    }
int main()
{
 vector<vector<int>> isConnected={{1,1,0,0},{1,1,0,0},{0,0,1,1},{0,0,1,1}};
   cout << findCircleNum(isConnected);
   return 0;
}   