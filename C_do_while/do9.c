#include<stdio.h>
int main()
{
	char i=1;
	do
	{
		printf("%c\t%c\t",i+64,i+98);
		i=i+4;
	}
	while(i<25);
	return 0;
}
