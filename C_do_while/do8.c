#include<stdio.h>
int main()
{
	int a=1,b=1,c=1,n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	printf("%d\t%d\t",b,c);
	do
	{
		a=b+c;
		b=c;
		c=a;
		printf("\t%d",a);
		i=i+2;
	}
	while(i<n-1);
	return 0;
		
}
	