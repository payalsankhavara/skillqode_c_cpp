//with return with parameter



#include<stdio.h>
#include<math.h>
float dosum(float amt,float time,float rate)
{
	
	float  CI;
	CI = amt * (pow(1 + rate / 100,time));
	return (CI=amt*(pow(1+rate/100,time)));
}
float main()
{
	float amt,rate,time,CI;
	printf("Enter amt:");
	scanf("%f", &amt);
	
	printf("Enter Time:");
	scanf("%f", &time);
	
	printf("enter rate:");
	scanf("%f", &rate);
	
	
	printf("\n CI:%f",dosum(amt,time,rate));

}




