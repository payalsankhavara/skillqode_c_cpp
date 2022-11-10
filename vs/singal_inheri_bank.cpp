#include<iostream>
using namespace std;
class Bank
{
    protected:
        int accountBalance=0;
    public:
        int deposite_amount(int);
        int withdraw_amount(int);
};
int Bank :: deposite_amount(int d_amt)
{
    accountBalance +  d_amt;
}
int Bank :: withdraw_amount(int w_amt)
{
    if (w_amt > accountBalance)
    {
       cout << "\n you not able to withdraw";  
    }
    else
    {
        accountBalance - w_amt;
    }
    
}
class Saving : public Bank
{
    public:
    int Show_balance();
};