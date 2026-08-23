 #include <iostream>
using namespace std;
bool linearsearch(int matrix[4][3],int row,int col,int tar)
{
 for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++) 
        {
            if(matrix[i][j]==tar)
            {
                return true;
            }
        }
    }
     return false;
}
int main()
{ int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //2d array
    int row=4;
    int col=3;
    int tar=8;
    cout<<linearsearch(matrix,row,col,tar)<<endl;
    //input
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++) 
    //     {
    //         cin>>matrix[i][j];
    //     }
    // }
    // cout<<endl;
    // //output
    //  for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++) 
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    return 0;
}