#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    void setVal(int x,int y) 
    {
        a=x; 
        b=y;
    }
    void getVal()
    {
        cout<<"\n a:"<<a<<"\t b:"<<b;

    }
    void dosum()
    {
        cout<<"\n a+b:"<<a+b;
        cout<<"\n a-b:"<<a-b;
        cout<<"\n a*b:"<<a*b;
        cout<<"\n a/b:"<<a/b;
        cout<<"\n a%b:"<<a%b;
    }

};
int main()
{
    Arith obj1;
    obj1.setVal(30,20);
    obj1.getVal();
    obj1.dosum();
}
