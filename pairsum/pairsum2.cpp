#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> num, int target)
{
    vector<int> ans;
    int n = num.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int psum = num[i] + num[j];
        if (psum < target)
        {
            i++;
        }
        else if (psum > target)
        {
            j--;
        }
        else 
            {
                ans.push_back(i);
                ans.push_back(j);
                 return ans;
            }
    }
    return ans;
}
int main()
{
    vector<int> num = {3, 7, 8, 9};
    int target = 16;

    vector<int> ans = pairsum(num, target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}
