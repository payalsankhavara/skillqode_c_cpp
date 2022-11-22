#include<stdio.h>
int sumdivisor(int);
int main()
{
	int num,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	sum=sumdivisor(num);
	if(num==sum)
	{
		printf("%d is a perfact number:",num);
	}
	else
	{
		printf("%d is not perfact number:",num);
	}
	return 0;
}
int sumdivisor(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}

	}
	return sum;
}