/*No Return No Parameter

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
	

}
float main()
{
	ele();
}*/

#include<stdio.h>
float units;
int calc(float units)
{
    	float amount;
    	if(units<=100)
        	amount=units*0.8+50;		
	else if(units<=300)
		amount=(units-100)*0.8+110;			
	else
		amount=(units-300)*0.9+270;			
	if(amount>300)
		amount=amount*1.15;				
	printf("\n Electricity bill for %2.f unit is %.2f ruppes.",units,amount );	    
}
void getdata()
{    
	printf("\nEnter Units...:");
	scanf("%f",&units);
	calc(units);
}
int main()
{	
    getdata();	
}