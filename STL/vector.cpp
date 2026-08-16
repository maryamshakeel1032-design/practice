#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // vec.erase(vec.begin()+2); //3 delete
    // vec.erase(vec.begin()); //1 delete
    // vec.erase(vec.begin()+1,vec.begin()+3); //2 and 3 delete start include but not end
    // vec.insert(vec.begin()+2,100); // 1 2 100 3 4 5
     // cout<<*(vec.begin())<<endl; //1 pointing first index
    // vec.clear();
    // cout << "Size is:" << vec.size() << endl;
    // cout << "Capacity is: " << vec.capacity() << endl;
    // cout << "Is empty: " << vec.empty() << endl;

    // vector<int> vec2(vec);
    // vector<int> vec(3,10);  // 10 10 10
    // vector<int> vec={1,2,3,4,5}; // one way to initailze vector

    //    vector<int> vec;
    //    vec.push_back(1);
    //    vec.push_back(2);
    //    vec.push_back(3);
    //     vec.emplace_back(4);
    //     vec.pop_back(); // data delete from last
    //    cout<<"Size is:"<<vec.size()<<endl; //vector's size 3
    //    cout<<"Capacity is: "<<vec.capacity()<<endl; //capacity 4

    // for (int val : vec) // printing elements
    // {
    //     cout << val << " ";
    // }

    //    cout<<endl;
    //    cout<<"vector's value at 1 is: "<< vec[1]<<"  or  "<<vec.at(1)<<endl ; // accessing index but usually with this[]
    //      cout<<"Front: "<< vec.front()<<endl ; //accessing first element
    //       cout<<"Back: "<< vec.back()<<endl ; //accessing last element

    // vector<int>::iterator it; // forward
    // for(it=vec.begin();it!=vec.end();it++)
    // {
    //     cout<<*(it)<< " ";
    // }

    //   vector<int>::reverse_iterator it; //backward
    // for(it=vec.rbegin();it!=vec.rend();it++)  
    // {
    //     cout<<*(it)<< " ";
    // }

    // for(vector<int>::reverse_iterator it=vec.rbegin();it!=vec.rend();it++)   //one version of it
    // {
    //     cout<<*(it)<< " ";
    // }
    // for(auto it=vec.rbegin();it!=vec.rend();it++)   //best version usig auto keyword
    // {
    //     cout<<*(it)<< " ";
    // }
     for(auto it=vec.begin();it!=vec.end();it++)   //best version usig auto keyword
    {
        cout<<*(it)<< " ";
    }
    return 0;
}
