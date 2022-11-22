#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter a:");
		scanf("%d",&a[i]);
	}
	printf("\n your array is \n\n");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]: %d",i,a[i]);
	}
}