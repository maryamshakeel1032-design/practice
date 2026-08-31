#include <iostream>
#include <vector>
using namespace std;
bool issafe(vector<string>& board,int row,int col,int n)
{
    for(int j=0;j<n;j++) //horizontal
    {
     if(board[row][j]=='Q')
     return false;
    }
     for(int i=0;i<n;i++) //vertical
    {
     if(board[i][col]=='Q')
     return false;
    }
     for(int i=row,j=col;i>=0&&j>=0;i--,j--) //left diagonal
    {
     if(board[i][j]=='Q')
     return false;
    }
     for(int i=row,j=col;i>=0&&j<n;i--&&j++) //right diagonal
    {
     if(board[i][j]=='Q')
     return false;
    }
    return true;
}
void nqueen(vector<string>& board,int row,int n,vector<vector<string>>& ans)
{
   if(row==n)
   {
    ans.push_back(board);
    return ;
   }
   for(int j=0;j<n;j++)
   {
    if(issafe(board,row,j,n))
    {  board[row][j]='Q';
       nqueen(board,row+1,n,ans);
       board[row][j]='.';
    }
   }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nqueen(board,0,n,ans);
        return ans;
    }
    int main()
{  
    int n=4;
    solveNQueens(n);
 return 0;
}