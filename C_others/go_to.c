#include<stdio.h>
int main()
{
	int i=1;
	skill:
	printf("%3d",i);
	i++;
	if(i<=10)
		goto skill;
}