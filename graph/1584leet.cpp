#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int mandist(vector<vector<int>>& points,int p1,int p2)
{
    return abs(points[p1][0]-points[p2][0])+abs(points[p1][1]-points[p2][1]);
}
    int minCostConnectPoints(vector<vector<int>>& points) { //tc:o(n^2.logn) 
        int n=points.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //priority_queue=>min heap
        vector<bool> mstset(n,false);
        int mstcost=0;
        pq.push({0,0}); //{wt,node}
        while(pq.size()>0)
        {
          auto p=pq.top();
          int wt=p.first;
          int node=p.second;
          pq.pop();
          if(mstset[node])
          {
            continue;
          }
          mstset[node]=true;
          mstcost+=wt;
          for(int i=0;i<n;i++)
          {
             if(!mstset[i])
             {
                int edgewt=mandist(points,node,i);
                pq.push({edgewt,i});
             }
          }
        }
        return mstcost;
    }
int main()
{
    vector<vector<int>> points= {{0, 0}, {2,2}, {3,10}, {5,2},{7,0}};
    cout << minCostConnectPoints(points);
    return 0;
}