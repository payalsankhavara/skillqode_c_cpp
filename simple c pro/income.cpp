#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,salary,e;
    cout<<"Enter Salary : ";
    cin>>salary;
    a=salary;
	b=(a*0);
	c=(a*0.1);
	d=(a*0.2);
	e=(a*0.3);
    if(a<2500)
    {
        cout<<"\n  Salary Is : "<<a;
        cout<<"\n  Tax Is : "<<b;
    }
    else if(a>=2500 && a<5000)
    {
        cout<<"\n  Salary Is : "<<a;
        cout<<"\n  Tax Is : "<<c;
    }
    else if(a>=5000 && a<10000)
    {
        cout<<"\n  Salary Is : "<<a;
        cout<<"\n  Tax Is : "<<d;
    }
    else if(a>=10000)
    {
        cout<<"\n  Salary Is : "<<a;
        cout<<"\n  Tax Is : "<<e;
    }

}