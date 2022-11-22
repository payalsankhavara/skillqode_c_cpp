#include<stdio.h>
int main()
{
	int a=10,*b;
	printf("\n\n value a:%d",a);
	printf("\n\naddress a:%d",&a);
	b=&a;
	printf("\n\n value b / address of :%d",b);
	printf("\n\n address b:%u",&b);
	printf("\n\n value of a using b: %d",*b);

	
}