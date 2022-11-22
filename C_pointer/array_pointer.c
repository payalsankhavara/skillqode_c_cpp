#include<stdio.h>
int main()
{
	int a[5]={11,12,13,14,15};
	int i,*ptr=NULL;
	ptr=a;
	printf("\n Address\tValue");	
	printf("\n~~~~~~~~~~~~~~~~~~~~");

	for(i=0;i<5;i++)
	{
		printf("\n %u\t%d",&a[i],a[i]);
		//printf("\n %u\t%d",(ptr+i),*(ptr+i));
	}
}