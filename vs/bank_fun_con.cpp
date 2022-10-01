#include<iostream>
using namespace std;
class Bank
{
    public:
    Bank(int);
    Bank(int,int);
    void ShowAccountBalance();

};
Bank::Bank(int AccountBalance)
{
    AccountBalance=1000;
    cout<<"\n default Constructor Called:";
}
Bank::Bank(int initBal,int AccountBalance )
{
   AccountBalance=initBal;
   cout<<"\nParameterized Constructor Callled:" ;
}


