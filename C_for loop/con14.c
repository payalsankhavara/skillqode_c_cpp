#include<stdio.h>
int main()
{
	int i=2,j;
	printf("Enter j:");
	scanf("%d",&j);
	for (i=1;i<=j;i++)
	{
		printf("\t%d",j*=i);
		
		
	}
	return 0;
}