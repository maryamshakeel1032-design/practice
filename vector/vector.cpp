#include <iostream>
#include <vector>
using namespace std;

    int main()
    { 

       vector<int> vec;
       cout<<vec.size()<<endl;
       vec.push_back(25);
       vec.push_back(35);
       vec.push_back(45);
       cout<<"Size After pushing_back:"<<vec.size()<<endl;
       vec.pop_back();
       cout<<"Size After pop_back:"<<vec.size()<<endl;
       for(int val:vec)
       {
        cout<<val<<endl;
       }
       cout<<vec.front()<<endl;
       cout<<vec.back()<<endl;
       cout<<vec.at(1)<<endl;
        return 0;
    }
