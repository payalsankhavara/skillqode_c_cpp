#include<stdio.h>
int main()
{
	char i='A';
	while(i<='Z')
	{
		printf("\t%c",i);
		i=i+2;
	}
	return 0;
}