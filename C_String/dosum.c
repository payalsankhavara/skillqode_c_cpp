#include<stdio.h>
int dosum()
{
	int a,b;
	printf("\n Enter a:");
	scanf("%d",&a);
	printf("\n Enter b:");
	scanf("%d",&b);
	printf("\n sum a+b : %d",a+b);
	printf("\n min a-b: %d",a-b);
	printf("\n mul a*b: %d",a*b);
	printf("\n div a/b: %d",a/b);
	printf("\n mod a%b: %d",a%b);
}
int main()
{
	dosum();
}