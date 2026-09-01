#include <iostream>
#include <vector>
using namespace std;
bool issafe(vector<vector<char>>& board,int row,int col,char dig)
{
 //horizontal
 for(int j=0;j<9;j++)
 {
    if (board[row][j]==dig)
    {
        return false;
    }
 }
  for(int i=0;i<9;i++)
 {
    if (board[i][col]==dig)
    {
        return false;
    }
 }
 int srow=(row/3)*3;
 int scol=(col/3)*3;
 for(int i=srow;i<=srow+2;i++)
 {
  for(int j=scol;j<=scol+2;j++)
  {
    if(board[i][j]==dig)
    {
        return false;
    }
  }
 }
 return true;
}
 bool sudoku(vector<vector<char>>& board,int row,int col)
 {   
    if(row==9)
    {
        return true;
    }

    int nextrow=row,nextcol=col+1;
    if(nextcol==9)
    {
        nextrow=row+1;
        nextcol=0;
    }

    if(board[row][col] !='.')
    {
       return sudoku( board,nextrow,nextcol);
    }

    for(char dig='1' ;dig<='9';dig++)
    {   if(issafe(board,row,col,dig))
       { 
        board[row][col]=dig;
        if(sudoku( board,nextrow,nextcol))
       { 
        return true;
        }
       }
         board[row][col]='.'; //backtrack
    }
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board,0,0);
    }
       int main()
{  
    vector<vector<char>> board;
    solveSudoku( board);
 return 0;
}