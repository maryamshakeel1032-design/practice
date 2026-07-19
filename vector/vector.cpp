#include <iostream>
#include <vector>
using namespace std;
 
    int main()
    {   int ans=0;
        vector<int>& vec={4,1,2,1,2};
        for(int val:vec)
        {
          ans^=val;
        }
        return ans;
    }
