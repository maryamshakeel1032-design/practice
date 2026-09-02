#include <iostream>
#include <vector>
using namespace std;
void helper(vector<vector<int>>& maze,int row,int col,string path,vector<string>& ans) //tc:o(4^(n^2)) 
{  int n=maze.size();
 if(row<0 || col<0 || row>=n || col >=n || maze[row][col]==0 || maze[row][col]==-1)
    {
        return ;
    }
    if(row==n-1 && col==n-1)
    {
        ans.push_back(path);
        return;
    }
    maze[row][col]=-1; //visit
     helper(maze,row+1,col,path+'D',ans); // d
     helper(maze,row-1,col,path+'U',ans); //u
     helper(maze,row,col-1,path+'L',ans); //l
     helper(maze,row,col+1,path+'R',ans); //r
      maze[row][col]=1;; //backtrack,unvisit 
}
vector<string> findpath(vector<vector<int>>& maze)
{
    int n=maze.size();
    vector<string> ans;
    string path="";
   // vector<vector<bool>> vis(n,vector<bool>(n,false));
   helper(maze,0,0,path,ans);
   return ans;
}
int main()
{  
    vector<vector<int>> maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
 vector<string> ans=findpath(maze);
 for(string path:ans)
 {
    cout<<path<<endl;
 }
 return 0;
}