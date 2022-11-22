#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d\t",i,j);
		}
		printf("%d\n",i,j);
	}
	
	return 0;
}