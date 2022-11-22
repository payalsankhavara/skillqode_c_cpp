#include<stdio.h>
int main()
{
	char i,j;
	for(i=65;i<=69;i=i+1)
	{
		for(j=1;j<=4;j++)
		{
			printf("%c\t",i,j);
		}
		printf("%c\n",i,j);
	}
	
	return 0;
}