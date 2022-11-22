#include<stdio.h>
int main()
{
	int a[5][5][5];
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{

				printf("\nEnter A:[%d] [%d] [%d]",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Your Matrix is \n\n");
	printf("A");
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{	
			for(k=0;k<3;k++)
			{
				printf("\t %d",a[i][j][k]);
			}
			printf("\n\n");
		}
		printf("\n");
	}
}
