
#include<stdio.h>
int main()
{
	int  i,j;
	char str1[20],str2[20];
	
	printf("Enter String:");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++);
	printf("\n length =%d",i);
	
	
	str2[i]='\0';	
	printf("\n reverse string:=%s",str2);	
	return 0;
	
	 
}