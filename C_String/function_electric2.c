// No Return With Parameter
// -------------------------

#include"stdio.h"
#include"conio.h"
float electric(float unit,float amount,float total,float totalamount)
{
		
}
float main()
{
	float unit,amount,total,totalamount,a;
	printf("Enter Unit:");
	scanf("%f",&unit);
	
	if(unit<=100)
	{
		amount=(unit*0.6+50);
		printf("\namount :%.2f",amount);
	}
	else if(unit<=200)
	{
		amount=(unit*0.60)+(unit*0.80)+50;
		printf("\namount :%.2f",amount);
	}
	else if(unit<=300)
	{
		amount=(100*0.60)+(200*0.80)+50;
		printf("\namount :%.2f",amount);
	}
	total=amount;
	printf("\ntotal =%.2f",total);
	if(totalamount<=300)
	{
		totalamount=(total*1.15);
		printf("\nTotal amount :%.2f",totalamount);

	}
	a=electric(unit,amount,total,totalamount);
}