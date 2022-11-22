#include<stdio.h>
int main()
{
	int i,len,j=0,k=0,fl=0;
	char str1[100],str2[100];
	printf("Enter String:");
	gets(str1);

	for(i=0;str1[i]!='\0';i++);
	printf("\n String Length=%d",i);
	k=i-1;
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[k];
		k--;
	}
	printf("\n reverse string =%s",str2);
	len=i;
	for(i=0;i<=len;i++)
	{
		printf("\n %c-%c",str1[i-1],str1[len-i]);
		if(str1[i]== str2[i])		
		{
			fl=0;
		}
		else
		{
			fl=1;
			break;
		}
	}
	if(fl==0)
	{
		printf("\n String Is  Palindrom:");
		
	}
	else
	{
		printf("\n String Is Not Palindrom:");
	}
}