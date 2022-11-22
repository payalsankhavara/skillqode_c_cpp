#include<stdio.h>
int main()
{
	int i,j; 
	printf("Enter limlt:");
	scanf("%d",&j);  
        for(i=1;i<=j;i++)                              
	{
		printf("%d %d",i*i);
	}
	printf("\n"); 
	return 0;                          
}
