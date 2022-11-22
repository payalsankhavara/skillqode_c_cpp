#include<stdio.h>
int main()
{
	char str[10];
	printf("Enter String:");
	//scanf("%s",str);
	scanf("%[^\n]",str);
	printf("\n String : %s",str);
}