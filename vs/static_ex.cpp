#include<iostream>
using namespace std;
class StatCount
{
    public:
    static int stCount;
    void setCount(int n)
    {
        stCount=n;
    }
    void Counter()
    {
        stCount++;
    }
    void getCount()
    {
        cout<<"\n"<<stCount;
    }
};
int StatCount :: stCount=0;
int main()
{
    StatCount obj1,obj2,obj3;
    obj1.setCount(10);
    obj3.Counter();
    obj1.getCount();
   // obj1.getCount();
    cout<<"\n Static:"<<StatCount::stCount;
    //cout<<"\n Static:"<<StatCount::stCount;
}