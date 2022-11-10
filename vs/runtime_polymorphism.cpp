#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void display()
        {
            cout<<"Base Class Is Invoked"<<endl;
        }
};
class Derived : public Base
{
    public:
        void display()
        {
            cout<<"Derived Class Is Invoked"<<endl;
        }
};
int main()
{
   // Derived d;
   // d.display();
   //Base b;
   //b.display();
   Base *p,b;
   Derived d;
   p=&b;    //base
   p->display(); // -> point to
   p= &d;
   p->display();
}