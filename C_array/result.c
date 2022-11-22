#include<stdio.h>
int main()
{
	int a[3],m1[3],m2[3],m3[3],total[3],rno[3],i;
	float per[3];
	char grade[3];
	for(i=0;i<3;i++)
	{
		printf("enter Roll no:");
		scanf("%d",&rno[i]); 

		printf("\tenter m1:");
		scanf("%d",&m1[i]);

		printf("\tenter M2:");
		scanf("%d",&m2[i]);

		printf("\tenter M3:");
		scanf("%d",&m3[i]);	
		
	}	
	printf("\n Roll No \tM1 \tm2 \tm3 \ttotal \tper \tgrade");
	for(i=0;i<3;i++)
	{
		total[i]=m1[i]+m2[i]+m3[i];
		per[i]=total[i]/3;

		
	
		if(per[i]>=75)
		{
			
			grade[i]='A';
		}
		else if (per[i]>65 && per[i]<75)
		{
			
			grade[i]='B';
		}
		else if(per[i]>50 && per[i]<65)
		{
			
			grade[i]='C';
		}
		else if(per[i]>35 && per[i]<50)
		{
			
			grade[i]='D';
		}
		else 
		{
			grade[i]='F';
		}
		printf("\n %d\t\t%d\t%d\t%d\t%d\t%.2f\t%c",rno[i],m1[i],m2[i],m3[i],total[i],per[i],grade[i]);		
	}
	
	printf("\n");

}

