#include<iostream>
using namespace std;
class Bank
{
    string name;
    int accBalance;
    public:
    Bank();
    Bank(int);
    void showAccountBalance();
    void getAccInfo();
    void showBankDetails();
};
void Bank::getAccInfo()
{
    cout<<"\nEnter your Name:";
    cin>>name;
}
Bank::Bank()
{
    accBalance=1000;
    cout<<"\n Default Constructor Called..";
}
Bank::Bank(int initbal)
{
    accBalance=initbal;
    cout<<"\n Parameterized constructors Callled..";
}
void Bank::showAccountBalance()
{
    cout<<"\nAcoount Balance:"<<accBalance;
}
void Bank::showBankDetails()
{
    cout<<"\nName:"<<name;
    cout<<"\nAccount Balance:"<<accBalance;
}
int main()
{
    Bank person[3];
    person[1].getAccInfo();
    person[1].showAccountBalance();
    person[1].showBankDetails();
}