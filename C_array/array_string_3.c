#include<stdio.h>
int main()
{
	int  i;
	char str[15];
	printf("Enter String:");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("\n l =%d",i);
	
}