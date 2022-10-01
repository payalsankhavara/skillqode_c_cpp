#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    void setVal() 
    {
        cout<<"Enter a:";
        cin>>a;

         cout<<"Enter ab:";
        cin>>b;
    }
    void getVal()
    {
        cout<<"\n a:"<<a<<"\n b:"<<b;

    }
    void dosum()
    {
        cout<<"\n a+b:"<<a+b;
        
    }

};
int main()
{
    Arith obj1;
    obj1.setVal();
    obj1.getVal();
    obj1.dosum();
}
