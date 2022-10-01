#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    skill:
    j=1;
    skill1:
     cout<<"*";
     j++;
     if(j<=i)
     goto skill1;
     i++;
    cout<<"\n";
    if(i<=5)
     goto skill;
}