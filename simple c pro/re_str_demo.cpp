
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
char myfunction(char str) 
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
	char my_string='payal';
    cout<<"Reverse string using My_rev()...\n";
    myfunction(my_string);
    cout<<my_string;
    return 0;
   
	
}
	
	
	
	 
