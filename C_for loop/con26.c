#include<stdio.h>
int main()
{
	int i,j;
	char n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j=j+1)
		{
			printf("%c\t",n++);
		}
		printf("\n");
	}
	
	return 0;
}