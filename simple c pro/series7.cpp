#include<iostream>
using namespace std;
int main()
{
    float i,n,a=0.5;
    cout<<"enter N:";
    cin>>n;
    for(i=0.5;i<=n;i++)
    {
        cout<<"\t"<<a;
        a=a+i;
    }
}