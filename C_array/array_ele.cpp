#include<iostream>
using namespace std;

int main()
{
	int i;
	float unit[5],bill[5];
	
	for(i=0;i<3;i++)
	{
		cout<<"Enter Unit For User :";
		cin>>unit[i];
	}
	cout<<"\nunit\tbill";
	for(i=0;i<3;i++)
	{
		if(unit[i]<=100)
		{
			bill[i]=unit[i]*0.60+50;
		}
		else if(unit[i]>=100 && unit[i]<=300)
		{
			bill[i]=((100*0.60)+((unit[i]-100)*0.80)+50);
		}
		else 
		{
			bill[i]=((100*0.60)+(200*0.8)+((unit[i]-300)*0.90))+50;	
		}
		if(bill[i]>300)
		{
			bill[i]=bill[i]*1.15;
			cout<<"\n"<<unit[i]<<"\t"<<bill[i];
		}
		else
		{
			cout<<"\n"<<unit[i]<<"\t"<<bill[i];
		}
	}
}
	







	

                                                                                               