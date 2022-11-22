#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n:");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
			printf("\t%d",i*i);
			i++;
		}
		else
		{
			printf("\t%d",i++);
			
		}
		
	}while(i<=n);
	
	return 0;
}





