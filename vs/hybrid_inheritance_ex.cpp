#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A constructor  called ...";
    }
    ~A()
    {
        cout<<"\n A destructor  called ...";
    }
};
class B:public A
{
    public:
    B()
    {
         cout<<"\n B constructor  called ...";
    }
     ~B()
    {
        cout<<"\n B destructor  called ...";
    }
};
class C
{
    public:
    C()
    {
         cout<<"\n C Constructor  called ...";
    }
     ~C()
    {
        cout<<"\n C destructor  called ...";
    }
};
class D:public B,public C
{
    
    public:
    D()
    {
         cout<<"\n D Constructor  called ...";
    }
     ~D()
    {
        cout<<"\n D destructor  called ...";
    }
};
int main()
{
    D d;
}
