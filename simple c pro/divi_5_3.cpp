#include<iostream>
using namespace std;
int main()

{
    int a;
    cout<<"Enter a:";
    cin>>a;
    if(a%5==0 , a%3==0)
    {
        cout<<"\n No is divisible by 3 or 5:"<<a;
    }
    else
    {
       cout<<"\n No is not divisible by 3 or 5:"<<a; 
    }
    
} 

