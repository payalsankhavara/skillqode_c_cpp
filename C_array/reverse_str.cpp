
/*/#include<stdio.h>
int main()
{
	int  i,j,k;
	char str1[20],str2[20];
	
	printf("Enter String:");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++);
	printf("\n length =%d",i);
	
	k=i-1;
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[k];
		k--;
	}
	str2[j]='\0';
	
	printf("\n reverse string:=%s",str2);	
	return 0;
	
	 
}*/


//C++ program to reverse a string using recursion
/*#include <iostream>
using namespace std;
void getreverse(string &str, int i)
{
    if (i > (str.length() - 1 - i))
    {
        return;
    }
    swap(str[i], str[str.length() - i - 1]);
    i++;
    getreverse(str, i);
}
int main()
{
    string name = "payal";
 
    getreverse(name, 0);
    cout << name << endl;
    return 0;
}*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char *My_rev(char *str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}
int main()
{ 
    char My_string[]="Journal Dev reverse example";
	cout<<"Reverse string using My_rev()...\n";
    My_rev(My_string);
	cout<<My_string;
    return 0;
}