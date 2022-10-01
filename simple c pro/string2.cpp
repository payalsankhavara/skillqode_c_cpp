#include<iostream>
#include<string>
using namespace std;
void mystring(string newstr)
{
     cout<<"Hello "<<newstr<<" Welcome To SkillCode \n:";
}
int main()
{
    string str;
     cout<<"Enter Your Name:";
   // cin>>str;
   cout<<"\n  "<<str;
    getline(cin,str);
    mystring(str);
    return 0;
}