#include<stdio.h>
int main()
{
	int n=4, i,j;
	
	for(i=0;i<=n;i++)
	{
		for(j=i;j>=0;j--)
		{
			printf("%c\t",j+65);
		}
		printf("\n");
	}
	
	return 0;
}