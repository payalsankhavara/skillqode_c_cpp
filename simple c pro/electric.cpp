#include<iostream>
using namespace std;
int main()
{
    float unit,amount,total,totalamount;
    cout<<"Enter Unit:";
    cin>>unit;

    if(unit<=100)   
    {
        amount=(unit*0.6+50);
        cout<<"\namount:"<<amount;
    }
    else if(unit<=200)
	{
		amount=(unit*0.60)+(unit*0.80)+50;
		cout<<"\namount :"<<amount;
	}
	else if(unit<=300)
	{
		amount=(100*0.60)+(200*0.80)+50;
		cout<<"\namount :"<<amount;
	}
    total=amount;
    cout<<"\ntotal is:"<<total;
    if(totalamount<=300)
    {
        totalamount=(total*1.15);
        cout<<"\n Total Amount is:"<<totalamount;
    }
}