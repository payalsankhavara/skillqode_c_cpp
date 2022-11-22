#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=10;i=i+2)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d\t",i,j);
		}
		printf("%d\n",i,j);
	}
	
	return 0;
}