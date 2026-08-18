#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparator(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first<p2.first) return true;
    else return false;
}

int main()
{
    // int arr[]={1,4,3,8,5};
    //  sort(arr,arr+5); //arr,arr+n , n=length ,sort in asending
    //  sort(arr,arr+5,greater<int>()); //in descending
    // for(int val :arr)
    // {
    //     cout<<val<<" ";
    // }


//     vector<pair<int,int>>  vec={{3,1},{2,1},{7,1},{5,2}};
//    sort(vec.begin(),vec.end()); //asending 
//    sort(vec.begin(),vec.end(),comparator);
//     for(auto val :vec)
//     {
//         cout<<val.first<<" "<<val.second<<endl;
//     }


//  vector<int> vec={1,2,3,4,5};
 //reverse(vec.begin(),vec.end());
//  reverse(vec.begin()+1,vec.begin()+3); // for some range,just 2 and 3
//  for(int val :vec)
//     {
//         cout<<val<<" ";
//     }

// string s="abc";
// next_permutation(s.begin(),s.end()); // acb,next permutation
// cout<<s<<endl;
// string s="bca";
// prev_permutation(s.begin(),s.end()); //previous permutation
// cout<<s<<endl;

// int a=5,b=10;
// swap(a,b);
// cout<<"a=" <<a<<endl;
// cout<<"b=" <<b<<endl;
//cout<<"max:"<<max(4,5)<<" "<<"min:"<<min(6,10)<<endl; //max,min function

vector<int> vec={1,2,3,4,5};
cout<<"Max:"<<*(max_element(vec.begin(),vec.end()))<<endl; //5
cout<<"Min:"<<*(min_element(vec.begin(),vec.end()))<<endl; //1
cout<<binary_search(vec.begin(),vec.end(),4)<<endl; //return in bool ,1
cout<<binary_search(vec.begin(),vec.end(),10)<<endl;  //0
 
int n=15;
cout<<__builtin_popcount(n)<<endl; //usually in competetive programming but not frequently used 
long int n2=15;
cout<<__builtin_popcountl(n2)<<endl; // l stands for long
long long int n3=15;
cout<<__builtin_popcountll(n3)<<endl; // double l stands for long long
    return 0;
}