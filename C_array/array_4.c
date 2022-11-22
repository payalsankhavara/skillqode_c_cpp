#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("enter a:",i);
		scanf("%d",&a[i]);	

	}
	for(j=0;j<5;j++)
	{
		printf("enter b:",j);
		scanf("%d",&b[j]);	

	}
	printf("\n your array is \n");
	printf(" a \t b \t total");
	for(i=0;i<5;i++)
	{
		printf("\n %d",a[i]);
		printf("\t %d",b[i]);
		printf("\t %d",a[i]+b[i]);
	}
	
}