#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);

	for(i=-n;i<=n;i++)
	{
		printf("\n%d",i);
	}
}