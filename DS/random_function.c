#include<stdio.h>
int main()
{
    int a[10];
        //for(int i=1;i<10;i++)
        //printf("\n %d",rand()%100);
    for(int i=1;i<10;i++)
        a[i]=rand()%50;
    for(int i=0;i<10;i++)
        printf("\n a[%d]:%d",i,a[i]);
}



















































/*int i,max,min;
    printf("enter min value=");
    scanf("%d",&min);
    printf("enter max value=");
    scanf("%d",&max);
     for(i=1;i<10;i++)
    printf("\t%d",(rand()%(max-min)+min));*/