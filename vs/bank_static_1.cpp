#include<iostream>
using namespace std;
class Bank
{
    public:
    static int accountBalance;
    static int totalTransaction;
    static int totalDepositeTransaction;
    static int totalWithdrawTransaction;
    string name;
   
    
    void getInfo()
    {
        cout<<"\n Enter Account Holder Name... " ;
        cin>>name;
    }
    Bank()
    {
        accountBalance=5000;
        cout<<"\n Account Balance.. " <<accountBalance;
    }
    Bank (int initbal)
    {
        accountBalance = initbal;
    }
    void showAccountDetails()
    {
        cout<<"\n Enter Withdraw Balance.. ";
        cin>>totalWithdrawTransaction;
        cout<<"\n Total Amount : "<<accountBalance - totalWithdrawTransaction;
        cout<<"\n Enter Deposit Balance.. ";
        cin>>totalDepositeTransaction;
        cout<<"\n Total Amount : "<<(accountBalance - totalWithdrawTransaction) + totalDepositeTransaction;
        
    }
   /* void setcounter(int x,int y,int z)
    {
        totalTransaction=x;
        totalWithdrawTransaction=y;
        totalDepositeTransaction=z;
    }*/
    void counter()
    {
        accountBalance ++;
        totalTransaction ++;
        totalDepositeTransaction ++;
        totalWithdrawTransaction ++;
        accountBalance=totalWithdrawTransaction+totalDepositeTransaction;
    }
};
int Bank :: accountBalance=0;
int Bank :: totalTransaction=0;
int Bank :: totalDepositeTransaction=0;
int Bank :: totalWithdrawTransaction=0;

int main()
{
    Bank person1;
    int i;
    for(i=1;i<=2;i++)
    {
        person1.getInfo();
       // person1.setcounter(1,2,2);
        person1.showAccountDetails();
        person1.counter();
    }
    cout<<"\n Total Transaction Count.. " <<Bank :: totalTransaction;
    cout<<"\n Total Number Of Deposite Transaction Count.. " <<Bank::totalDepositeTransaction;
    cout<<"\n Total Number Of Withdraw Transaction Count.. " <<Bank::totalWithdrawTransaction;






   
}