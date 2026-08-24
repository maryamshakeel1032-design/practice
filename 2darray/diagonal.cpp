 #include <iostream>
 #include <vector>
using namespace std;
// int diagonalsum(int matrix[4][4],int n) //o(n*n)
// {    int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i==j)
//             {
//                 sum+=matrix[i][j]; //primary diagonal
//             }
//             else if(j=n-i-1)
//             {
//                 sum+=matrix[i][j]; //secondary diagonal
//             }
//         }
//     }
//     return sum;
// }
int diagonalsum(int matrix[4][4],int n) //o(n)
{    int sum=0;
    //pd=> j=i
    //sd=> j=n-i-1
    for(int i=0;i<n;i++)
    {
      sum+=matrix[i][i];
      if(i!=n-i-1)
      {
        sum+=matrix[i][i];
      }
    }
    return sum;
}
int main()
{ 
    // int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; //2d array
//     int n=4;
//     cout<<diagonalsum(matrix,n)<<endl;
 vector<vector<int>> mat={{1,2,3,},{4,5,6,10,11},{7,8,9}}; //size of be row could be changed
 //row=> matrix.size()
 //col=> matrix[i].size() , element in one row
 for(int i=0;i<mat.size();i++)
 {
    for(int j=0;j<mat[i].size();j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
 }
  cout<<endl;
    return 0;
}
