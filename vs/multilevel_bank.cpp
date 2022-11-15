#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
    int accountno,accountBalance;
    string accountType;
public:
    void getAccountDetails();
    void displayDetails();
};
class Person : public Bank
{
public:
    string name;
    void read();
    void disply();
};
class Loan : public Person
{
    int loan_no,loan_amount;
public:
    void acceptBalance();
    void displayBalance();
};
void Person::read()
{
    cout<<"\n Account Holder Name.. " ;
    cin>>name;
}
void Person::disply()
{
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n\t Details Of Custmor";
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n Account Holder Name.. "<<name;
}
void Bank::getAccountDetails()
{
    cout<<" Account Number.. ";
    cin>>accountno;
    cout<<" Account Balance.. ";
    cin>>accountBalance;
    cout<<" Account Type.. ";
    cin>>accountType;
}
void Bank::displayDetails()
{
    cout<<"\n Account Number.."<<accountno;
    cout<<"\n Account Balance.."<<accountBalance;
    cout<<"\n Account Type.. "<<accountType;
}
void Loan::acceptBalance()
{
    cout<<" Loan Number.. ";
    cin>>loan_no;
    cout<<" Loan Amount.. ";
    cin>>loan_amount;
}
void Loan::displayBalance()
{
    cout<<"\n Loan Number.. " <<loan_no;
    cout<<"\n Loan Amount.. " <<loan_amount;
}
int main()
{
    Bank b;
    Person p;
    Loan l;
    p.read();
    b.getAccountDetails();
    l.acceptBalance();
    p.disply();
    b.displayDetails();
    l.displayBalance();
    return 0;
}