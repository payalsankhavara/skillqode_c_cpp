#include<stdio.h>
int main()
{
	int a[3][3],i,j,b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	printf("\n\t\tA\t\t\tB\t\tTotal of A-B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			printf("\t%d",(a[i][j]+b[i][j]));
		}
		printf("\n");
	}
	return 0;
}