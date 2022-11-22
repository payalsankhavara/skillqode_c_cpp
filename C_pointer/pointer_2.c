#include<stdio.h>
int main()
{
	int a=10,b=20,*p,*s,c;
	p=&a;
	s=&b;
	
	printf("\n\n value of a:%d",a);
	printf("\n\n address of a:%u",&a);

	printf("\n\n value of b:%d",b);
	printf("\n\n address of b:%u",&b);
	
	c=*s;
	*s=*p;
	*p=c;

	printf("\n\n swap a:%d",*p);
	printf("\n\n swap b:%d",*s);
	return 0;
}