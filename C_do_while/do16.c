#include<stdio.h>
int main()
{
	int i=5,j;
	do
	{
		j=5;
		do
		{	
			printf("%d\t",i);
			j--;
		}
		while(j>=i);
		printf("\n");		
		i--;
	}
	while(i>=1);
}