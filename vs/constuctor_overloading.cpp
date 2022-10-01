#include<iostream>
using namespace std;
class Sum
{
    public:
    Sum(int,int);
    Sum(int,int,int);
    Sum(double,double);
    Sum(double,double,double);
};
Sum::Sum(int a,int b)
{
    cout<<"\n Two Para Int:"<<a+b;
}
Sum::Sum(int a,int b,int c)
{
    cout<<"\n Three Para Int:"<<a+b+c;
}
Sum::Sum(double a,double b,double c)
{
    cout<<"\n Three Para Double:"<<a+b+c;
}
Sum::Sum(double a,double b)
{
    cout<<"\n Two Para Double:"<<a+b;
}
int main()
{
    Sum ob1(10.5,52.6);
    Sum ob2(10,5);
    Sum ob3(10.5,30.5,10.2);
    Sum ob4(45,5);
}