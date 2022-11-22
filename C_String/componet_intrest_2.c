//with return no parameter


#include<stdio.h>
#include<math.h>
float dosum()
{
	float amt,rate,time,CI;
	printf("Enter amt:");
	scanf("%f", &amt);
	
	printf("Enter Time:");
	scanf("%f", &time);
	
	printf("enter rate:");
	scanf("%f", &rate);
	
	return (CI=amt*(pow(1+rate/100,time)));
}
float main()
{
	
	float CI;
	CI=dosum();
	printf("\n CI:%f",CI);

}




