#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int>& num)
{
    for (int val : num)
    {
        int fre = 0;
        for (int ele : num)
        {
            if (val=ele)
            {
                fre++;
            }
        }
        if (fre > (num.size() / 2))
        {
            return val;
        }
    }

    return -1;
}
int main()
{
    vector<int> num = {1, 2, 2, 3, 3, 3, 3};
    cout << "Majority Element is:";
    cout << majorityelement(num);
}
