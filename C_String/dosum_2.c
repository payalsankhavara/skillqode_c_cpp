//no return no parameter
/*#include<stdio.h>
void dosum()
{
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("\n Sum:%d",a+b);
}
int main()
{
	dosum();
}*/




//no return with parameter
/*#include<stdio.h>
void dosum(int x,int y)
{
	printf("\n x:%d \t y:%d",x,y);
	printf("\n sum:%d",x+y);
}	
	
int main()
{
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	dosum(a,b);
}*/



//with return no parameter
/*#include<stdio.h>
int dosum()
{
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	return (a+b);
}
int main()
{
	int sum;
	sum=dosum();
	printf("\n sum:%d",sum);
}*/








//with return with parameter

#include<stdio.h>
int dosum(int a,int b)
{
	return (a+b);
}
int main()
{
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("\n sum: %d",dosum(a,b));
}