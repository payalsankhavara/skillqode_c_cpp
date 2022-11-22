#include"stdio.h"
int main()
{
	int n=11,i=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("%d\t",n++);
			j++;
			
		}
		n+=5;
		printf("\n");
		i++;
	}
	
}