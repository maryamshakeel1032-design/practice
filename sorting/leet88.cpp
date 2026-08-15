#include <iostream>
#include <vector>
using namespace std;
void mergesort( vector<int>& A ,int m,vector<int>& B,int n) //o(m+n) TC and o(1) SC
{
    int idx=m+n-1,i=m-1,j=n-1;
        while(i>=0 && j>=0)
        {
            if(A[i]>=B[j])
            {
                A[idx--]=A[i--];
            }
            else
            {
             A[idx--]=B[j--];
            }
        }
        while(j>=0)
        {
            A[idx--]=B[j--];
        }
}
int main()
{
    vector<int> A = {1,2,3,0,0,0};
    vector<int> B = {2,5,6};
    int m=3,n=B.size();
    mergesort( A ,m,B,n);
    for(int i=0;i<m+n;i++)
   {
    cout<<A[i]<<" ";
   }
    return 0;
}