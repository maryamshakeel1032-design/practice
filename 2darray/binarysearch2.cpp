 #include <iostream>
 #include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) { //o(n+m)
        int m=matrix.size(),n=matrix[0].size();
        int r=0,c=n-1;
        while(c>=0 && r<m)
        {
            if(target==matrix[r][c])
            {
                return true;
            }
            else if(target<matrix[r][c])
            {
                c--;
            }
            else r++;
        }
        return false;
    }
int main()
{ vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{20,30,34,60}}; //2d vector
    int target=44;
    cout<<searchMatrix(matrix,target)<<endl;
    return 0;
}