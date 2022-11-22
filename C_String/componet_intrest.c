//No Return No Parameter

#include<stdio.h>
#include<math.h>
float cmint()
{

	float principle, rate, time, CI;
	
	printf("Enter principle:");
	scanf("%f", &principle);
	
	printf("Enter Time:");
	scanf("%f", &time);
	
	printf("enter rate:");
	scanf("%f", &rate);
	CI = principle * (pow(1 + rate / 100,time));
	printf("compound intrest:");
	printf("%.2f\n", CI);
}
int main()
{
	cmint();
}























