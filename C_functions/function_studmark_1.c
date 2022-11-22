#include<stdio.h>
int main()
{
	int m,p,c;
	float total();
	printf("enter Math:");
	scanf("%d",&m);

	printf("Enter Physics:");
	scanf("%d",&p);

	printf("Enter chemistrey:");
	scanf("%d",&c);
	
	total(m,p,c);
}
float total(int m,int p,int c)
{
	float per(float total);
	float total;
	total=m+p+c;
	printf("\nTotal is: %.2f",total);
	per(total);
}
float per(float total)
{
	float per;
	per=(total/300)*100;
	printf("\nper is:%.2f",per);
	if(per>=75)
	{
		printf("\n grade:A");
	}
	else if(per>=65 && per<75)
	{
		printf("\ngrade:B");	
	}
	else if(per>=50 && per<65)
	{
		printf("\ngrade:C");	
	}
	else if(per>=35 && per<50)
	{
		printf("\ngrade:D");	
	}
	else
	{
		printf("\n FAIL");
	}
}