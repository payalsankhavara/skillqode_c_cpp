#include<stdio.h>
int main()
{
	int i=1,n,j=1;
	printf("Enhter n:");
	scanf("%d",&n);
	do
	{
		printf("\t%d",i*j);
		i*=2;
		j++;
	}
	while(i<=n);
	return 0;
			
}
