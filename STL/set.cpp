#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
// set<int>  s;  //insert,emplace,count,erase o(logn)
//    s.insert(1);
//    s.insert(2);
//    s.insert(3);
//    s.insert(4);
//    s.insert(5);

//    s.insert(1);   // no duplicate allwed thus store only once
//    s.insert(2);
//    s.insert(3);
//    cout<<"Lower bound :"<<*(s.lower_bound(4))<<endl; //equal or greater
//     cout<<"Upper bound :"<<*(s.upper_bound(4))<<endl; // greater than value
//     for(auto val:s)
//     {
//         cout<<val<<" ";
//     }

    // multiset

// multiset<int>  s;  
// s.insert(1);
// s.insert(1); // duplicate allowed
// s.insert(1);
// s.insert(1);
// for(auto val:s)
//     {
//         cout<<val<<" ";
//     }

 // unorder_map

unordered_set<int>  s;  //  insert,erase,count  o(1)/ o(1) in rare o(n) but generally o(1)
   s.insert(1);  
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);

   s.insert(1);   // no duplicate allowed
   s.insert(2);
   s.insert(3); 
for(auto val:s)
    {
        cout<<val<<" ";
    }
    return 0;
}