#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter Charatcer:");
	scanf("%c",&ch);

	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n char is vowel:");
	}
	else
	{
		printf("\n char is consontant:");
	}
	return 0;
}