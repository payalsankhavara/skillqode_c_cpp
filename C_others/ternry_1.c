#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;

	(a>b && a>c)?printf("\n a greater..=%d",a):
	(b>c)?printf("\n b greater..=%d",b):
	printf("\n c greater..=%d",c);
	
}
