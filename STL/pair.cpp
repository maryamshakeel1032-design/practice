#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //    pair<int,int> p={1,2};
    //    cout<<p.first<<endl;
    //    cout<<p.second<<endl;

    // pair<string, int> p = {"Alpha", 1}; // any type could be for pair
    // cout << p.first << endl;
    // cout << p.second << endl;

    //    pair<int,pair<char,int>> p={1,{'a',1}};
    //    cout<<p.first<<endl;
    //    cout<<p.second.first<<endl;
    //    cout<<p.second.second<<endl;

    vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    // for(pair<int,int> p:vec)
    // {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    vec.push_back({4,5}); //generally  only insert,generally more use
    vec.emplace_back(4,5); //in_place changes,more efficient
    for(auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}