#include<stdio.h>
int main()
{
	int a[10];
	int i,j=0;
	for(i=0;i<10;i++)
	{
		printf("Enter i:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		if(a[i]%2==0)
		{
		
			printf("\n [%d]:%d" ,i,a[i]);
			j=j+a[i];
		}
	}
	printf("\nodd element total:%d",j);
}