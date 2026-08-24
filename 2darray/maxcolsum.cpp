 #include <iostream>
using namespace std;
int maxcolsum(int matrix[][3],int row,int col)
{ 
    int maxsum=INT64_MIN;
 for(int i=0;i<col;i++)
    { 
        int sum=0;
        for(int j=0;j<row;j++) 
        {
           sum+=matrix[j][i]; 
        }
       maxsum=max(maxsum,sum);
    }
     return maxsum;
}
int main()
{ int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //2d array
    int row=3;
    int col=3;
    cout<<maxcolsum(matrix,row,col)<<endl;
    return 0;
}