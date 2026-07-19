#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& vec)
{
   int start=0;
   int end=vec.size()/2-1;
   
while(start<end )
  
  {
    swap(vec[start],vec[end]);
    start++;
    end--;
  }
   
  
}
int main()
{
   vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
     reverse(vec) ;
     for(int val:vec)
     {
        cout<<val<<" ";
     }
    return 0;
}