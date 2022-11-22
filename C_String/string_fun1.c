#include <stdio.h>
#include <string.h>
int main()
{
     	char str1[100],str2[100];  
 	printf("Enter string: ");
	gets(str1);
	
	printf("\n len:%d",strlen(str1));
	
	strcpy(str2,str1);
	strrev(str2);
	printf("\nstr2: %s",str2);
	
	if(!strcmp(str1,str2))
	{
		printf("\nstring is palindrome");	
	}
	else
	{
		printf("\nstring is not palindrome");
	}

	
}




