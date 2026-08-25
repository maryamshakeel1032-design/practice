 #include <iostream>
 #include <vector>
using namespace std;
bool searchinrow(vector<vector<int>>& matrix, int target,int row)   //o(logn)
{
    int n=matrix[0].size();
    int st=0; int end=n-1;
    while(st<=end)
    { 
        int mid=st+(end-st)/2;
        if(target==matrix[row][mid])
        {
            return true;
        }
        else if(target>matrix[row][mid])
        {
            st=mid+1;  //right
        }
        else end=mid-1; //left
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {  // o(logm)
        int m=matrix.size();int n=matrix[0].size();
        int strow=0; int endrow=m-1;
        while(strow<=endrow)
        {   int midrow=strow+(endrow-strow)/2;
            if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1])
            {
                return searchinrow(matrix,target,midrow);  //o(logm+logn)=>o(log(m*n))
            }
            else if(target>matrix[midrow][n-1])
            {
                strow=midrow+1;   //down
            }
            else endrow=midrow-1; //up
        }
        return false;
    }
int main()
{ vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{20,30,34,60}}; //2d vector
    int target=34;
    cout<<searchMatrix( matrix,target)<<endl;
    return 0;
}