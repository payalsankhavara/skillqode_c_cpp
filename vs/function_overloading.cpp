#include<iostream>
using namespace std;
class Area
{
    public:
    void CalcArea(int);
    void CalcArea(int,int);
    double CalcArea(double);
};
void Area::CalcArea(int side)
{
    cout<<"\n Area :"<<side*side;
}
void Area::CalcArea(int l,int b)
{
    cout<<"\n Area :"<<l*b;
}
double Area::CalcArea(double side)
{
   return side*side;
}
int main()
{
    Area Square,rect;
    Square.CalcArea(8);
    cout<<"\nsquare area in double:"<<Square.CalcArea(7.5);
    rect.CalcArea(7,8);
    return 0;
}

    