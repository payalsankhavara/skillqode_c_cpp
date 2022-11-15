#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
        int bal;
    public:
        static int total_deposite_amt,total_withdraw_amt,total_trans;
        Bank(int bal)
        {
            total_deposite_amt += bal;
            this->bal=bal;
        }
        int showBalance()
        {
            return bal;
        }
        int deposite(int deposite)
        {
            total_deposite_amt += deposite;
            total_trans ++;
            bal=bal+deposite;
            return bal;
        }
        int withdraw(int withdraw)
        {
            if(bal > withdraw)
            {
                total_trans ++;
                total_withdraw_amt += withdraw;
                bal=bal- withdraw;
                return bal;
            }
            else
            {
                cout<<"\n Check Your Balance:";
                return 1;
            }
        }
};
int  Bank :: total_deposite_amt =0;
int  Bank :: total_withdraw_amt=0;
int  Bank :: total_trans=0;
int main()
{
    system("CLS");
    int ch,dp=0,wt;
    Bank a(100),b(200);
    a.deposite(50);
    b.deposite(50);
    b.withdraw(50);

    cout<<"\n Total Deposite amt:"<<Bank::total_deposite_amt;
    cout<<"\n Total WithDraw Amt:"<<Bank::total_withdraw_amt;
    cout<<"\n Total No Of Transation:"<<Bank::total_trans;
    cout<<"\n Balance a:"<<a.showBalance();
    cout<<"\n Balance b:"<<b.showBalance();
}


