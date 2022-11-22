#include<stdio.h>
int main()
{
	float a=0.5,n,i=0.5;
	printf("Enter n:");
	scanf("%f",&n);
	while(i<=n)
	{
		printf("\n%.1f",a);	
		a=a+i;	
		i++;
	}
	return 0;
}	