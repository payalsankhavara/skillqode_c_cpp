#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,salary,e;
	//clrscr();
	printf("Enter Salary:");
	scanf("%f",&salary);
	a=salary;
	b=(a*0);
	c=(a*0.1);
	d=(a*0.2);
	e=(a*0.3);
	if(a<2500)
	{
		printf("\nsalary is :%f",a);
		printf("\ntax is :%f",b);
	}
	else if(a>=2500 && a<5000)
	{
		printf("\nsalary is :%f",a);
		printf("\ntax is :%f",c);
	}
	else if(a>=5000 && a<10000)
	{
		printf("\nsalary is :%f",a);
		printf("\ntax is :%f",d);
	}
	else if(a>=10000)
	{
		printf("\nsalary is :%f",a);
		printf("\ntax is :%f",e);
	}


	//getch();
}
