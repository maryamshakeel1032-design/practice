 #include <iostream>
 #include <vector>
 #include <unordered_set>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) { //o(n*n)
        unordered_set<int> s;
        vector<int> ans;
        int n=grid.size() ;
         int a,b;
        int expectsum=0,actualsum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {  
                actualsum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end())
                {
                   a=grid[i][j];   //repeated
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        expectsum=(n*n)*(n*n+1)/2;
         b=expectsum + a - actualsum;  //missing
        ans.push_back(b);
        return ans;
    }
     int main()
{ vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
vector<int> ans=findMissingAndRepeatedValues( grid) ;
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
    return 0;
}