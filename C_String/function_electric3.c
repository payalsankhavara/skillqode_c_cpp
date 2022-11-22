//With Return No Parameter

#include"stdio.h"
#include"conio.h"
float ele()
{
	float unit,amount,total,totalamount;
	
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
	printf("\ntotal :%.2f",total);
	if(totalamount<=300)
	{
		totalamount=(total*1.15);
		printf("\nTotal amount :%.2f",totalamount);

	}
	return(unit,amount,total,totalamount);
	

}
float main()
{
	float a;
	a=ele();
	
}