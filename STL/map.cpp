#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
//  map<string,int>  m;  //insert,emplace,count,erase o(logn)
//  m["tv"]=100;
//   m["laptop"]=50;
//  m["headphones"]=50;   
//   m["watches"]=120;
//   m["laptop"]=100; // overwrite ,no duplicate  allowed
//  // m.insert({"camera",20}); 
//   m.emplace("ipad",25); 
//    m.erase("ipad"); //delete ipad's value
//     for(auto p:m)
//     {
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<"Count"<<m.count("laptops")<<endl; // return  count of laptop as key
//     cout<<"Laptop's value is: "<<m["laptop"]<<endl; // laptop's value
//     if(m.find("camera") !=m.end())
//     {
//         cout<<"found" <<endl;
//     }
//     else  cout<<"No found"<<endl;


    // multimap

// multimap<string,int>  m;  
// m.emplace("ipad",25);
// m.emplace("ipad",25); // duplicate allowed
// m.insert({"ipad",25});
// m.emplace("ipad",25);
// m.emplace("ipad",25);

// // m.erase("ipad"); // all delete
// m.erase(m.find("ipad")); //pass iterator thus only one delete
// for(auto p:m)
//     {
//         cout<<p.first<<" "<<p.second<<endl;
//     }

 // unorder_map

unordered_map<string,int>  m;  //  insert,erase,count  o(1)
m.emplace("ipad",25); // no duplicate allowed
m.emplace("tv",50);  
m.insert({"watches",25});  
m.emplace("mobiles",100);
m.emplace("laptop",50);
for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}