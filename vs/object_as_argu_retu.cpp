#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example(){}
        Example(int x,int y)
        {
            a=x;
            b=y;
        }
        Example add(Example E1,Example E2)
        {
            Example temp;
            temp.a = E1.a + E2.a;
            temp.b = E1.b + E2.b;
            return temp;
        }
        void ShowVal()
        {
            cout<<"Value Of 00bject a:"<<a<<"\t b:"<<b<<"\n";
        }

};
int main()
{
    Example e1(10,20),e2(20,30),e3;
    cout<<"\n E1:";
    e1.ShowVal();

    cout<<"\n E2:";
    e2.ShowVal();

    cout<<"\n E3:";
    e3=e3.add(e1,e2);
    e3.ShowVal();
    return 0;



}