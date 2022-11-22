#include<stdio.h>
int main()
{
	int i=1,j,n=1;
	do
	{
		j=1;
		do
		{	
			printf("%d\t",n);
			j++;
		}
		while(j<=5);
		n+=2;
		printf("\n");
		i++;
	}

	while(i<=5);
	
}