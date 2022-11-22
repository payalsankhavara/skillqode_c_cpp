#include<stdio.h>
int main()
{
	
	char i=1,j,n=65;
	do
	{
		j=1;
		do
		{
			printf("%c\t",n++);
			j++;
			
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=5);
	
}