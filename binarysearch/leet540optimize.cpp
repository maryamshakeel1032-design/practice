#include <iostream>
#include <vector>
using namespace std;
int singleelement(vector<int>& A) {
           int n=A.size();
        if(n==1) return A[0];

        int st=0 , end=n-1;

        while(st<=end)
        { 
            int mid=st+(end-st)/2;

            if(mid==0 && A[0]!=A[1])  return A[mid];
            if(mid==n-1 && A[n-1]!=A[n-2]) return A[mid];
            
            if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1]) return A[mid];
            
             if(mid % 2==0) //even
            {
                if(A[mid-1]==A[mid]) //left
                {
                    end=mid-1;
                }
                else  {st=mid+1;} //right
            }
            else  //odd
            {
                if(A[mid-1]==A[mid]) //right
                {
                    st=mid+1;
                }
                else {end=mid-1;} //left
            }
        } 
         return -1;
    }
    int main()
{
    vector<int> A= {1,1,3,3,4,4,8}; 
    cout << singleelement(A)<< endl;
    return 0;
}