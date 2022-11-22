#include<stdio.h>
int main()
{
	int i,a[10],x=0,y=0,c=0,d=0,n=0;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		n=n+a[i];
		if(i%2!=0)
		{
			x=x+a[i];
		}
		else
		{
			y=y+a[i];
		}
		if(a[i]%2!=0)
		{
			c=c+a[i];
		}
		else
		{
			d=d+a[i];
		}
	}
	printf("\nOdd Position Total=%d",x);
	printf("\nEven Position Total=%d",y);
	printf("\nOdd Element Total=%d",c);
	printf("\nEven Element Total=%d",d);
	printf("\n Total=%d",n);
	return 0;
}