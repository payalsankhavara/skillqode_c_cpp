#include<stdio.h>
int main()
{
	int a[2],b[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("enter a:",i);
		scanf("%d",&a[i]);	

	}
	for(j=0;j<2;j++)
	{
		printf("enter b:",j);
		scanf("%d",&b[j]);	

	}
	printf("\n your array is \n");
	for(i=0;i<2;i++)
	{
		printf("\n a[%d]:%d",i,a[i]);
		
	}
	printf("\n your array is \n");
	for(j=0;j<2;j++)
	{
		printf("\n a[%d]:%d",i,b[j]);
	}
}