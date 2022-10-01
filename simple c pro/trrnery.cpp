#include<iostream>
using namespace std;
int main()
{
    int a=1000,b=100,c=300;
    (a>b && a>c)?cout<<"\n A is greater.."<<a:
    (b>c)?cout<<"\n B is greater.."<<b:
    cout<<"\n C is greater.."<<c;
}