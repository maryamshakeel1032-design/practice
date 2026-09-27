#include <iostream>
#include <vector>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas=0 ,totcost=0;
        for(int val:gas)
        {
            totgas+=val;

        }
          for(int val:cost)
        {
            totcost+=val;
            
        }
        if(totgas<totcost)
        {
            return -1;
        }
        //unique exist
        int st=0,currgas=0;
        for(int i=0;i<gas.size();i++)
        { 
            currgas+=(gas[i]-cost[i]);
            if(currgas<0)
            {
                st=i+1;
                currgas=0;
            }
        }
        return st;
    }
int main()
{ 
    // vector<int> gas={1,2,3,4,5};
    // vector<int> cost={3,4,5,1,2};
    vector<int> gas={1,2,4,5,9};
    vector<int> cost={3,4,1,10,1};
    int ans=canCompleteCircuit( gas,cost) ;
    cout<<ans;
    return 0;
}