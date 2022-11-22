//no return with parameter


#include<stdio.h>
#include<math.h>
float dosum(float amt,float time,float rate)
{
	float ci;
	ci=amt*(pow(1+rate/100,time));
	printf("\n ci:%f",ci);
}
float main()
{
	float amt,rate,time,ci;
	printf("Enter amt:");
	scanf("%f", &amt);
	
	printf("Enter Time:");
	scanf("%f", &time);
	
	printf("enter rate:");
	scanf("%f", &rate);
	ci=dosum(amt,rate,time);

}




