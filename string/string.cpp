#include <iostream>
#include <string>
using namespace std;

int main()
{ // char chr[]="apnacollege"; 
// chr="hello" ; //error
string str="apna collge ";
    cout<<str<<endl;
    str="hello"; // no error because dynamic and runtime changes occur,contigous in nature
    cout<<str<< endl;
string str1="apna";
string str2="collge ";
string str3=str1+str2; 
cout<<str3<<endl;
string str4="shradha";
string str5="shradha";
cout<<(str4==str5)<<endl;
string str6="kapra";
cout<<(str5<str6)<<endl; //0(false) because (lexographically)
cout<<str4.length()<<endl;
 string str7;
 cout<<"Enter output:";
 //cin>>str7;//no data after spaces 
getline(cin,str7); //also getline(cin,str7,delimiter); 
 cout<<"Output:"<<str7<<endl;

 for(int i=0;i!=str.length();i++) //any loop
 {
    cout<<str[i]<< " ";
 }
 cout<<endl;
 for(char ch:str)
 {
    cout<<ch<<" ";
 }
  cout<<endl;
    return 0;
}