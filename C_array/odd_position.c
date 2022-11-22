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
	for(i=1;i<10;i+=2)
	{
		printf("\n [%d]:%d" ,i,a[i]);
		j=j+a[i];
	}
	printf("\neven position total:%d",j);
}