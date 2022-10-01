#include<iostream>
using namespace std;
int main()
{
    int salary,hra,da,z;
    cout<<"Enter Salary:";
    cin>>salary;

   if(salary<=5000)
	{
		hra=salary*0.08;
		da=salary*0.2;
        cout<<"\nhra:"<<hra<<"\nda:"<<da;
    }
    else if(salary<=5000 && salary>=10000)
	{
		hra=salary*0.12;
		da=salary*0.3;
        cout<<"\nhra:"<<hra<<"\nda:"<<da;
    }
    else if(salary<=10000 && salary<=15000)
	{
		hra=salary*0.15;
		da=salary*0.4;
		cout<<"\nhra:"<<hra<<"\nda:"<<da;
	}
    else
	{
		hra=salary*0.20;
		da=salary*0.5;
	}
	z=salary+hra+da;
    cout<<"\nTotal Salary Is:"<<z;
}