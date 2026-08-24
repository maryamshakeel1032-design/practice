 #include <iostream>
using namespace std;
pair<int,int> linearsearch(int matrix[4][3],int row,int col,int tar)
{  pair<int,int> p={-1,-1};
 for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++) 
        {
            if(matrix[i][j]==tar)
            {
                p={i,j};
            return p;
            }
        }
    }
     return p;
}
int main()
{ int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //2d array
    int row=4;
    int col=3;
    int tar=8;
    pair<int,int> ans=linearsearch(matrix,row,col,tar);
    cout<<"i:"<<ans.first <<"  "<<"j:"<<ans.second<<endl;
    return 0;
}
