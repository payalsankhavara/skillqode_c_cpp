#include<stdio.h>
int main()
{
	int a=1,b=1,c=1,n,i;
	printf("Enter N:");
	scanf("%d",&n);
	printf("%d\t%d\t",b,c);
	for(i=1;i<n-1;i=i+2)
	{
		a=b+c;
		b=c;
		c=a;
		printf("%d\t",a);
	}
	return 0;
}