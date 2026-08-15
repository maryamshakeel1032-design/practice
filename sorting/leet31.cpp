#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int>& A) {  // o(n) TC and o(1) SC
        int pivot=-1,n=A.size();
      for(int i=n-2;i>=0;i--)
      {
       if(A[i]<A[i+1])
       {
          pivot=i;
          break;
       }
      }  
       if(pivot==-1)
       {
        reverse(A.begin(),A.end()); // in-place changes
        return;
       }
      for(int i=n-1;i>pivot;i--)
      {
        if(A[i]>A[pivot])
        {
            swap(A[i],A[pivot]);
            break;
        }
      }
        // reverse(A.begin()+pivot+1,A.end()); 
     int  i=pivot+1,j=n-1;
      while(i<=j)
      {
        swap(A[i],A[j]);
        i++;
        j--;
      }
    }
int main()
{
    vector<int> A = {1,2,3,6,5,4};
    int n=A.size();
    nextPermutation(A);
    for(int i=0;i<n;i++)
   {
    cout<<A[i]<<" ";
   }
    return 0;
}