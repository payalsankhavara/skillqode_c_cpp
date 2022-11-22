#include<stdio.h>
int main()
{
    int i,j;
    i=65;
   	 do
   	 {
        	j=1;
        	do
        	{
           		 printf("\t%c",i);
			 j++;
           		
		}
		while(j<=5);
		printf("\n");
        	i++;
   	 }
	 while(i<=69);
}