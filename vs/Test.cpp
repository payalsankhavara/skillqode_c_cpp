//3
#include<iostream>
using namespace std;
class Test
{
    int testCode;
    string description;
    int nocandidate,centerread;
    public:
    void schedule();
    void calcntr();
    void disptest();
};
    void Test::schedule()
    {
        cout<<"\n enter testCode : ";
        cin>>testCode;
        cout<<"\n description : ";
        cin>>description;
        cout<<"\n number of candidate : ";
        cin>>nocandidate;
        calcntr();
    }
   void Test::calcntr()
    {
       centerread = nocandidate/100+1;
    }
    void Test::disptest()
    {
        cout<<"\n testcode : "<<testCode;
        cout<<"\n description : "<<description;
        cout<<"\n number of candidate  : "<<nocandidate;
        cout<<"\n number of center : "<<centerread;
    }
int main()
{
    Test foruserview;
    foruserview.schedule();
    foruserview.disptest();
}
