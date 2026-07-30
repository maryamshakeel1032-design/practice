#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int> num)
{ int count=0;
    for(int i=0;i<num.size();i++)
 {
    for(int j=i+1;j<num.size();j++)
 {
  if(num[i]==num[j])
  {
 count++;
  }
 }
 if(count>=(num.size()))
 {
    return num[i];
 }
 }
 return 0;
}
int main()
{
 vector<int> num={1,2,2,1,1,1};
 cout<<"Majority Element is:";
 cout<<majorityelement(num);
}
