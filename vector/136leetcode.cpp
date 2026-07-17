#include <iostream>
#include <vector>
using namespace std;
int singlevalue(vector<int>& vec)
{
  int ans = 0;
  for (int val : vec)
  {
    ans ^= val;
  }
  return ans;
}
int main()
{
  vector<int> vec = {4, 1, 2, 1, 2};
  cout<<singlevalue(vec)<<endl;
  return 0;
}
