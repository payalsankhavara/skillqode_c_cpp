#include<iostream>
using namespace std;
class Bank
{
    int accBlance;
    public:
    Bank();
    Bank(int);
    void showAccountBlance();
};
Bank::Bank()
{
    accBlance=1000;
    cout<<"\nConstuctor Callled .. ";
}
Bank::Bank(int initbal)
{
    accBlance=initbal;
    cout<<"\nParameterized Constructor Called .. ";
}
void Bank::showAccountBlance()
{
    cout<<"\nAccount Blance : "<<accBlance;
}
int main()
{
    Bank person1(1500),person2(5000),person3;
    person1.showAccountBlance();
    person2.showAccountBlance();
    person3.showAccountBlance();
}

    
