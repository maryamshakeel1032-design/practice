#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int> num)
{ 
    for(int i=0;i<num.size();i++)
 {
    int count=0;
    for(int j=0;j<num.size();j++)
 {
  if(num[i]==num[j])
  {
 count++;
  }
 }
 if(count>(num.size()/2))
 {
    return num[i];
 }
 }
 return 0;
}
int main()
{
 vector<int> num={1,2,2,3,3,3,3};
 cout<<"Majority Element is:";
 cout<<majorityelement(num);
}
