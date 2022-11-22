
#include<stdio.h>
int main()
{
	int  i,j;
	char str1[15],str2[15];
	printf("Enter String:");
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
	printf("\n length =%d",i);
	for(j=0;j<i;j++)
	{
		str2[j]=str1[i];
	}
	str2[j]='\0';
	printf("\n copy string:=%s",str1);	
	return 0;
	
	
}