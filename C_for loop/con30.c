#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
}