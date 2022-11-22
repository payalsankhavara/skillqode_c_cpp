#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n:");	
	scanf("%d",&n);
	do
	{
		printf("%d\n",n--);
	}
	while(n>=i);
	return 0;
	
}
