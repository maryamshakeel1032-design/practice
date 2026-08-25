 #include <iostream>
 #include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int srow=0, erow=m-1 ,scol=0,  ecol=n-1;
        vector<int>  ans;
        while(srow<=erow && scol<=ecol)
        {
            //top
            for(int j=scol;j<=ecol;j++)
            {
                ans.push_back(matrix[srow][j]);
            }
            //right
             for(int i=srow+1;i<=erow;i++)
            {
                ans.push_back(matrix[i][ecol]);
            }
            //bottom
             for(int j=ecol-1;j>=scol;j--)
            { 
                  if(srow==erow)
                {
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            //left
             for(int i=erow-1;i>=srow+1;i--)
            {
                if(scol==ecol)
                {
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
            srow++;erow--;scol++;ecol--;
        }
        return ans;
    }
    int main()
{ vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{20,30,34,60}}; 
    vector<int> ans=spiralOrder(matrix);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
    return 0;
}